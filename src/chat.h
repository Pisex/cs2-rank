#pragma once

#include "abstract.h"
#include <playerslot.h>
#include "utils/module.h"
#include "eiface.h"
#include "interfaces/cgameresourceserviceserver.h"
#include "entity2/entitysystem.h"
#include "addresses.h"
#include <string>

extern CEntitySystem *g_pEntitySystem;

const std::string colorsString[] = {
	"{DEFAULT}",
	"{RED}",
	"{LIGHTPURPLE}",
	"{GREEN}",
	"{LIME}",
	"{LIGHTGREEN}",
	"{LIGHTRED}",
	"{GRAY}",
	"{LIGHTORANGE}",
	"{ORANGE}",
	"{LIGHTBLUE}",
	"{BLUE}",
	"{PURPLE}",
	"{GRAYBLUE}"};

const std::string colorsHex[] = {
	"\x01",
	"\x02",
	"\x03",
	"\x04",
	"\x05",
	"\x06",
	"\x07",
	"\x08",
	"\x09",
	"\x10",
	"\x0B",
	"\x0C",
	"\x0E",
	"\x0A"};

class CChat
{
public:
	CChat()
	{
	}

	void PrintToChatAll(const char *msg, ...);
	void PrintToChatCT(const char *msg, ...);
	void PrintToChatT(const char *msg, ...);

	void PrintToChat(CPlayerSlot slot, const char *msg, ...);
    void PrintToChat(CBasePlayerController *player, const char *msg, ...);

private:
	void PrintToChatTeam(int teamIndex, const char *msg);
	std::string Colorizer(std::string str);
};

extern CChat *g_CChat;