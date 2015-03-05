// X_Net.hpp

#ifndef X_NET_HPP
#define X_NET_HPP

#include "X_Pre.hpp"
#include "X_NetData.hpp"
#include "PX2Singleton_NeedNew.hpp"
#include "PX2ServerInfo.hpp"

namespace PX2
{

	class X_Net : public Singleton<X_Net>
	{
	public:
		X_Net();
		~X_Net();

		bool Init();
		bool Term();

		// �˺ŷ�����
	public:
		/**
		 * ���ӵ��ʺŷ�����
		 */
		void ConnectToAccountServer();
		bool IsConnected_AccountServer() const;

		void SendGetGameServerList();

		void SendNewAccount();
		void SendRegistMD5(const std::string &userName, const std::string &md5password);
		void SendLoginMD5(int uIN, const std::string &userName, const std::string &md5password);
		void SendLoginTP(int apiID, const std::string &uin, const std::string &sessionID, int accountType);

	public_internal:
		void OnGameServerList();

	protected:
		bool mIsAccountServerConnected;

		int mServerListVersion;
		std::vector<ServerInfo> mGameServerList;

		// ��Ϸ������
	public:
		void ConnectToGameServer(int serverid);
		void ReConnectGameServer();
		bool IsConnected_GameServer() const;

		int GetTryToConnectServerID() const;
		int GetConnectedGameServerID() const;

		void SendGameServerLogin(int uIN, const std::string &sessionID);
		void SendNewRole(const std::string &nickName, int headId);

	public:
		std::vector<LoginData_Actor *> TheLoginData_Actors;

	protected:
		int mTryToConnectGameServerID;
		bool mIsGameServerConnected;

		// ��Ϸ
	public:

	protected:
		float mClentSignalServerTime;

	public:
		/**
		* ����GMָ��
		*/
		void SendGM(const std::string &text);

		// ����
	public:
		std::string GetPasswordMD5(const std::string &readablePasswd);
	};

#define X_NET X_Net::GetSingleton()

}

#endif