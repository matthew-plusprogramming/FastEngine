//  FastEngine
//
//  Created by Matthew Lin.
//  Contact: matthewlinplusprogramming@gmail.com
//
//  Needed to prevent duplicate symbol errors.
//
//  Copyright © 2020 Matthew Lin. All rights reserved.
//
#include <string>

#include "Utility/vector2D.h"
#include "config.h"

int fe_config::WINDOW_WIDTH = 960;
int fe_config::WINDOW_HEIGHT = 640;
std::string fe_config::WINDOW_TITLE = "Fast Engine";

Vector2D fe_config::SPRITE_RENDERER_DEFAULT_SRC_RECT_SIZE(16, 16);