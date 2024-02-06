#include "pch.h"

void menu_imgui::cheat_gui()
{
	ImGui::SetNextWindowSize({ 280,280 });
	ImGui::Begin("Made by GLX-ILLUSION", nullptr, ImGuiWindowFlags_NoScrollbar);
	ImGui::Checkbox("Init Hooks", &cfg->init_hooks);
	ImGui::Checkbox("Fov Changer", &cfg->fov_changer);
	
	if (cfg->fov_changer)
		ImGui::SliderFloat("Fov Value", &cfg->fov_value, 50.0, 180);

	ImGui::Checkbox("Box", &cfg->box);
	ImGui::Checkbox("Lines", &cfg->lines);
	ImGui::Checkbox("Name", &cfg->names);
	ImGui::Checkbox("Skeleton", &cfg->skeleton);
	ImGui::Checkbox("dump bones", &cfg->dump_bones);

	ImGui::End();
}
