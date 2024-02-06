#include "pch.h"

#define ConfigFile ("C:\\Config\\GreedIsBad.ini")

void settings::initialize_settings()
{
	this->fov_changer = false;
	this->fov_value = 90.0f;
	this->init_hooks = false;
	this->lines = false;
	this->names = false;
	this->skeleton = false;
	this->dump_bones = true;
}

void settings::save_settings()
{
	fopen_s(&file, ConfigFile, ("wb"));
	if (file) {
		fwrite(&cfg, sizeof(cfg), 1, file);
		fclose(file);
	}
}

void settings::load_settings()
{
	fopen_s(&file, ConfigFile, ("rb"));
	if (file) {
		fseek(file, 0, SEEK_END);
		auto size = ftell(file);

		if (size == sizeof(cfg)) {
			fseek(file, 0, SEEK_SET);
			fread(&cfg, sizeof(cfg), 1, file);
			fclose(file);
		}
		else
		{
			fclose(file);
			initialize_settings();
		}
	}
	else
	{
		initialize_settings();
	}
}
