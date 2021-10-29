#pragma once

#include "ANectereCommand.hpp"

namespace Nectere
{
	namespace Command
	{
		class TemplateCommand : public ANectereCommand
		{
		public:
			TemplateCommand(Network::AServer *, Concurrency::ThreadSystem *);
			bool IsValid(const std::string &) const override;
			void Treat(uint16_t, const std::string &) override;
		};
	}
}