#pragma once

#include "ANectereCommand.hpp"

namespace Nectere
{
	namespace Command
	{
		class ReloadAppCommand : public ANectereCommand
		{
		public:
			ReloadAppCommand(const Ptr<Network::AServer> &, const Ptr<Concurrency::ThreadSystem> &);
			bool IsValid(const std::string &) const override;
			void Treat(uint16_t, const std::string &) override;
		};
	}
}