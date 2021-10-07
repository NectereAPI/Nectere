#include "ANectereCommand.hpp"

namespace Nectere
{
	namespace Command
	{
		ANectereCommand::ANectereCommand(uint16_t id, Network::AServer *server, Concurrency::ThreadSystem *threadSystem): ACommand(id),
			m_Server(server),
			m_ThreadSystem(threadSystem) {}
	}
}