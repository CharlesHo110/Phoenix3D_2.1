-- language.lua

function AddLanguages()
	-- ���˵�
	PX2_LM:AddItem1("File", "�ļ�")
	PX2_LM:AddItem1("NewProject", "�½�����")
	PX2_LM:AddItem1("NewScene", "�½�����")
	PX2_LM:AddItem1("Open", "��")
	PX2_LM:AddItem1("OpenProject", "�򿪹���")
	PX2_LM:AddItem1("Save", "����")
	PX2_LM:AddItem1("SaveAs", "���Ϊ")
	PX2_LM:AddItem1("Close", "�ر�")
	PX2_LM:AddItem1("Exit", "�˳�")
	--
	PX2_LM:AddItem1("Edit", "�༭")
	PX2_LM:AddItem1("Repeal", "����")
	PX2_LM:AddItem1("Repeat", "�ظ�")
	PX2_LM:AddItem1("Copy", "����")
	PX2_LM:AddItem1("Paste", "ճ��")
	PX2_LM:AddItem1("Delete", "ɾ��")
	PX2_LM:AddItem1("ImportSelectedRes", "����ѡ����Դ")
	PX2_LM:AddItem1("Import", "����")
	PX2_LM:AddItem1("Export", "����")
	PX2_LM:AddItem1("Select", "ѡ��")
	PX2_LM:AddItem1("Translate", "λ��")
	PX2_LM:AddItem1("Rotate", "��ת")
	PX2_LM:AddItem1("Scale", "����")
	PX2_LM:AddItem1("PlayAndStop", "����/ֹͣ")
	PX2_LM:AddItem1("ResetPlay", "���ò���")	
	--
	PX2_LM:AddItem1("View", "��ͼ")
	PX2_LM:AddItem1("Window", "����")
	PX2_LM:AddItem1("Stage", "��̨")
	
	PX2_LM:AddItem1("StageCenter", "��̨����ͣ��")
	PX2_LM:AddItem1("PerspectiveCamera", "ʹ��͸�����")
	PX2_LM:AddItem1("TopViewCamera", "ʹ�ö������")
	--
	PX2_LM:AddItem1("Debug", "����")
	PX2_LM:AddItem1("EditorSimulate", "�༭���з���")
	PX2_LM:AddItem1("EditorPlay", "�༭���в���")
	PX2_LM:AddItem1("EditorStop", "ֹͣ")
	PX2_LM:AddItem1("WindowPlay", "�������ڲ���")
	PX2_LM:AddItem1("PlayConfig", "��������")
	--
	PX2_LM:AddItem1("Tool", "����")
	PX2_LM:AddItem1("VersionWindows", "���ɰ汾��Ϣ_Windows")
	PX2_LM:AddItem1("VersionAndroid", "���ɰ汾��Ϣ_Android")
	PX2_LM:AddItem1("VersionIOS", "���ɰ汾��Ϣ_IOS")
	PX2_LM:AddItem1("Setting", "����")
	
	PX2_LM:AddItem1("Help", "����")
	
	-- �༭�˵�
	PX2_LM:AddItem1("Create", "����")
	PX2_LM:AddItem1("Add", "���")
	PX2_LM:AddItem1("SceneActor", "������ɫ")
	PX2_LM:AddItem1("UI", "����")
	
	PX2_LM:AddItem1("ResetPlay", "���ò���")
	PX2_LM:AddItem1("Play", "����")
	PX2_LM:AddItem1("Stop", "��ͣ")
	PX2_LM:AddItem1("Reset", "����")
	
	PX2_LM:AddItem1("FindInSceneTree", "�ڹ������в���")
	PX2_LM:AddItem1("FindInResTree", "����Դ���в���")
	
	PX2_LM:AddItem1("Node", "�ڵ�")
	PX2_LM:AddItem1("Geometry", "������")
	PX2_LM:AddItem1("RectPiece", "��Ƭ")
	PX2_LM:AddItem1("Box", "������")
	PX2_LM:AddItem1("Sphere", "��")
	PX2_LM:AddItem1("Object", "���")
	PX2_LM:AddItem1("Character", "��ɫ")
	PX2_LM:AddItem1("Effect", "��Ч")
	PX2_LM:AddItem1("Trigger", "������")
	PX2_LM:AddItem1("AmbientRegion", "����")
	PX2_LM:AddItem1("Sound", "����")
	PX2_LM:AddItem1("Particles", "����")
	PX2_LM:AddItem1("Billboard", "�����")
	PX2_LM:AddItem1("Beam", "����")
	PX2_LM:AddItem1("Robbion", "����")
	PX2_LM:AddItem1("Soundable", "����")
	PX2_LM:AddItem1("UIPicBox", "ͼƬ")
	PX2_LM:AddItem1("UITest", "�ı�")
	PX2_LM:AddItem1("UIFrame", "��")
	PX2_LM:AddItem1("UIRelativeFrame", "������")
	PX2_LM:AddItem1("UIButton", "��ť")
	PX2_LM:AddItem1("UICheckButton", "ѡ���")
	PX2_LM:AddItem1("UIEditBox", "�༭��")
	PX2_LM:AddItem1("UIProgressBar", "������")
	
	-- ��ͼ
	PX2_LM:AddItem1("Project", "����")
	PX2_LM:AddItem1("Scene", "����")
	PX2_LM:AddItem1("TimeLine", "ʱ����")
	PX2_LM:AddItem1("Stage", "��̨")
	PX2_LM:AddItem1("ResView", "��Դ")
	PX2_LM:AddItem1("InspView", "����")
	
	PX2_LM:AddItem1("StartView", "��ʼҳ")
	PX2_LM:AddItem1("UIView", "����")
	PX2_LM:AddItem1("LogicView", "�߼�")
	PX2_LM:AddItem1("ConsoleView", "����̨")
	PX2_LM:AddItem1("PreView", "Ԥ��")
	
	-- ProjView
	PX2_LM:AddItem1("pv_Project", "����(Project)")
	PX2_LM:AddItem1("pv_Scene", "����(Scene)")
	PX2_LM:AddItem1("pv_UI", "����(UI)")
	PX2_LM:AddItem1("pv_Logic", "�߼�(Logic)")
	PX2_LM:AddItem1("pv_Camera", "���(Camera)")
	PX2_LM:AddItem1("pv_Sky", "���(Sky)")
	PX2_LM:AddItem1("pv_Terrain", "����(Terrain)")
	PX2_LM:AddItem1("pv_Character", "��ɫ(Character)")
	PX2_LM:AddItem1("pv_Object", "���(Object)")
	PX2_LM:AddItem1("pv_Effect", "��Ч(Effect)")
	PX2_LM:AddItem1("pv_Sound", "��Ч(Sound)")
	PX2_LM:AddItem1("pv_Trigger", "����(Trigger)")
	PX2_LM:AddItem1("pv_AmbientRegion", "����(Ambient)")
	
	-- ResView
	PX2_LM:AddItem1("CopyResPath", "������Դ·����������")
	
	-- һ��
	PX2_LM:AddItem1("Name", "����")
	PX2_LM:AddItem1("Ge", "��")
	PX2_LM:AddItem1("Use", "��")
	
	-- Notice
	PX2_LM:AddItem1("Notice", "ע��")
	PX2_LM:AddItem("Tip0", "����ѡ�񸸽ڵ㣡", "You must select a parent node to add!")
	PX2_LM:AddItem("Tip1", "���ڵ������Node��", "Parent must be a node!")
	PX2_LM:AddItem("Tip3", "����ѡ��1�����������", "You must select a object to export!")
	PX2_LM:AddItem("Tip4", "�����Ѿ����ڣ�", "Project is already exist!")
	
	--�༭��
	PX2_LM:AddItem("WelcomeToEditor", "��ӭʹ��Phoenix3D�༭��!", "Welcome to Phoenix3D editor!")
	PX2_LM:AddItem("CurSelObj", "��ǰѡ�����: ", "CurrentSelect: ")
	PX2_LM:AddItem("CurSelRes", "��ǰѡ����Դ: ", "CurrentSelectRes: ")
	PX2_LM:AddItem("PickingPos", "���ڵ�ѡλ��: ", "PickingPos: ")
	PX2_LM:AddItem("CurSelObjNull", "��ǰѡ�����: (��)", "CurrentSelect: (null)")
	PX2_LM:AddItem("CurSelResNull", "��ǰѡ����Դ: (��)", "CurrentSelectRes: (null)")
	PX2_LM:AddItem("PickingPosNull", "���ڵ�ѡλ��: (0,0,0)", "PickingPos: (0,0,0)")
	
	-- �༭��TabBar
	PX2_LM:AddItem1("PinPage", "����ҳ")
	PX2_LM:AddItem1("PinPages", "����ҳ��")
end

AddLanguages()
