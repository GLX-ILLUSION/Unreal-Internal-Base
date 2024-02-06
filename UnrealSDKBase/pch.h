
#ifndef PCH_H
#define PCH_H

#include <Windows.h>
#include <iostream>
#include <direct.h>

#include "SDK.h"
#include "includes.h"
#include "Cheat.hpp"
#include "Menu.hpp"
#include "Settings.hpp"
#include "Drawings.hpp"

#define _CRT_SECURE_NO_WARNINGS

inline cheat_manager* sdk;
inline menu_imgui* gui;
inline settings* cfg;
inline FILE* file;
inline drawings* draw;

#endif
