/*
*
* �ļ�����	��	PX2Scene.hpp
*
*/

#ifndef PX2SCENE_HPP
#define PX2SCENE_HPP

#include "PX2GamePre.hpp"
#include "PX2Node.hpp"
#include "PX2Actor.hpp"
#include "PX2CameraActor.hpp"
#include "PX2GraphicsRoot.hpp"
#include "PX2Rect.hpp"
#include "PX2Polysegment.hpp"
#include "PX2CellSpace.hpp"
#include "PX2Gameable.hpp"
#include "PX2LogicModule.hpp"

namespace PX2
{
	typedef void (*SceneUpdateCallback) (double appSeconds, double elapsedSeconds);

	class Scene : public Gameable
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_PROPERTY;
		PX2_DECLARE_STREAM(Scene);

	public:
		Scene ();
		virtual ~Scene ();

		static int GetNextID ();

		// update
		virtual void Update (double appSeconds, double elapsedSeconds);

		void SetUpdateCallback (SceneUpdateCallback callback);
		SceneUpdateCallback GetUpdateCallback () const;

		// camera (�����и�ȱʡ��camear actor)
		void SetCameraActor (CameraActor *camActor);
		CameraActor *GetCameraActor ();

		// ID
		void SetSceneID (int id);
		int GetSceneID ();

		// ��������
		void SetSceneLength (float length);
		void SetSceneWidth (float width);
		float GetSceneLength () const;
		float GetSceneWidth () const;

		enum SceneManageType
		{
			SMT_NONE,
			SMT_OCTREE,
			SMT_CELL2D,
			SMT_MAX_TYPE
		};
		void SetSceneManageType (SceneManageType type);
		SceneManageType GetSceneManageType ();

		void GetRangeActors (std::vector<Actor*> &actors, const APoint &center, 
			float radius, bool useActorSelfRadius, const std::bitset<PX2_ACTOR_BS_SIZE> &bits);
		void GetRangeActorsExcept (Actor *except, std::vector<Actor*> &actors, 
			const APoint &center, float radius, bool useActorSelfRadius,
			const std::bitset<PX2_ACTOR_BS_SIZE> &bits);

		// scene node
		PX2::Node *GetSceneNode ();

		// scene use ViewPort
		void SetViewport (const Rectf &rect);
		const Rectf &GetViewport () const;

		// Actors
		void AddActor (Actor *actor);
		virtual void OnAddedActor (Actor *actor);
		bool RemoveActor (Actor *actor);
		virtual void OnRemoveActor (Actor *actor);
		bool IsActorIn (Actor *actor);
		int GetNumActors ();
		Actor *GetActor (const std::string &name) const;
		Actor *GetActor (int i);
		Actor *GetActor (PX2::Movable *object);
		Actor *GetActorByID (int id);
		virtual void OnActorPositionChanged (Actor *actor, const APoint &beforcePos); // Actor set position ��ʱ����ô˺���

		void CalLights ();

		// Actor Position Change 
		bool IsExistActorPositionChanged ();

		// Help system
		void ShowHelpMovables (bool show);

		void ComputeVisibleSetAndEnvironment ();
		Culler &GetCuller ();

		// events
		virtual void DoEnter ();
		virtual void DoExecute (Event *event);
		virtual void DoLeave ();

	protected:
		SceneUpdateCallback mUpdateCallback;		
		CameraActorPtr mCameraActor;
		CameraPtr mCamera;

		int mSceneID;
		float mLength;
		float mWidth;
		SceneManageType mSceneManageType;
		Rectf mViewport;
		NodePtr mSceneNode;
		std::vector<ActorPtr> mActors;
		std::map<int, Actor*> mActorsMap;
		bool mIsActorPositionChanged;
		CellSpacePtr mCellSpace;

		Culler mCuller;

		static int msNextID;
	};

	PX2_REGISTER_STREAM(Scene);
	typedef Pointer0<Scene> ScenePtr;

#include "PX2Scene.inl"

}

#endif