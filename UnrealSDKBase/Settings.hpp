#pragma once

class settings
{
public:
	bool menu_open;
	bool init_hooks;
	bool fov_changer;
	float fov_value;
	bool lines;
	bool names;
	bool box;
	bool skeleton;
	bool dump_bones;
	void initialize_settings();
	void save_settings();
	void load_settings();
};