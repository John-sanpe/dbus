/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 * audit.h - libaudit integration for SELinux and AppArmor
 *
 * SPDX-License-Identifier: AFL-2.1 OR GPL-2.0-or-later
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

#ifndef BUS_AUDIT_H
#define BUS_AUDIT_H

#include <dbus/dbus.h>

#include "bus.h"

void bus_audit_init (BusContext *context);
int bus_audit_get_fd (void);
void bus_audit_shutdown (void);

#endif
