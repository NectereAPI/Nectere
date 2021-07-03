#pragma once

namespace Nectere
{
	class Application;
	class ACommand;
	class AApplicationHandler
	{
		friend class Application;
	private:
		Application *m_Application;

	protected:
		virtual void OnCommandAdded(ACommand *) = 0;
		virtual void OnUpdate(float) = 0;
		virtual void OnBeforeReload() = 0;
		virtual void OnAfterReload() = 0;
	};
}