/*
	Copyright (C) 2008 - 2024
	by Jörg Hinrichs <joerg.hinrichs@alice-dsl.de>
	Part of the Battle for Wesnoth Project https://www.wesnoth.org/

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY.

	See the COPYING file for more details.
*/

#include "gui/dialogs/game_delete.hpp"

#include "preferences/preferences.hpp"

namespace gui2::dialogs
{

REGISTER_DIALOG(game_delete)

/**
 * Helper to invert @ref prefs::get().ask_delete_saves.
 *
 * The value stored and the way shown is inverted.
 */
static bool get_dont_ask_again()
{
<<<<<<< HEAD
	return !prefs::get().ask_delete_saves();
=======
	return !prefs::get().ask_delete();
>>>>>>> c10c47ebb180dff204a8aea7058edfd9f90cc7d5
}

/**
 * Helper to invert @ref prefs::get().set_ask_delete_saves.
 *
 * The value stored and the way shown is inverted.
 */
static void set_dont_ask_again(const bool ask_again)
{
<<<<<<< HEAD
	prefs::get().set_ask_delete_saves(!ask_again);
=======
	prefs::get().set_ask_delete(!ask_again);
>>>>>>> c10c47ebb180dff204a8aea7058edfd9f90cc7d5
}

game_delete::game_delete()
	: modal_dialog(window_id())
{
	register_bool(
			"dont_ask_again", true, &get_dont_ask_again, &set_dont_ask_again);
}

} // namespace dialogs
