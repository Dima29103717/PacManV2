#pragma once

#include <vector>
#include <utility>

#define LEVEL_FILE_NAME "level"
#define SAVE_FILE_NAME "save"
#define FILE_EXT ".txt"

namespace dataenums
{
	enum class GhostType : char
	{
		GHOST_TYPE_LOW = 'L',
		GHOST_TYPE_HIGH = 'H',
		GHOST_TYPE_IMPOSSIBLE = 'I'
	};
}

namespace filestructs
{
	struct pos_t
	{
		int x;
		int y;
	};

	typedef std::vector<std::pair<dataenums::GhostType, pos_t>> GhostInfo;
	typedef std::vector<std::string> LevelMap;
	struct level_t
	{
		GhostInfo ghost_info;
		LevelMap level_map;
		pos_t player_pos;
		unsigned short life_count;
	};

	typedef pos_t Position;
	typedef level_t LevelInfo;
}