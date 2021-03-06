/*
 * Copyright (C) 2003-2014 The Music Player Daemon Project
 * http://www.musicpd.org
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
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "config.h"
#include "Registry.hxx"
#include "util/Macros.hxx"
#include "plugins/FileInputPlugin.hxx"

#ifdef HAVE_ALSA
#include "plugins/AlsaInputPlugin.hxx"
#endif

#ifdef ENABLE_ARCHIVE
#include "plugins/ArchiveInputPlugin.hxx"
#endif

#ifdef ENABLE_CURL
#include "plugins/CurlInputPlugin.hxx"
#endif

#ifdef HAVE_FFMPEG
#include "plugins/FfmpegInputPlugin.hxx"
#endif

#ifdef ENABLE_SMBCLIENT
#include "plugins/SmbclientInputPlugin.hxx"
#endif

#ifdef ENABLE_NFS
#include "plugins/NfsInputPlugin.hxx"
#endif

#ifdef ENABLE_MMS
#include "plugins/MmsInputPlugin.hxx"
#endif

#ifdef ENABLE_CDIO_PARANOIA
#include "plugins/CdioParanoiaInputPlugin.hxx"
#endif

#ifdef ENABLE_DESPOTIFY
#include "plugins/DespotifyInputPlugin.hxx"
#endif

const InputPlugin *const input_plugins[] = {
	&input_plugin_file,
#ifdef HAVE_ALSA
	&input_plugin_alsa,
#endif
#ifdef ENABLE_ARCHIVE
	&input_plugin_archive,
#endif
#ifdef ENABLE_CURL
	&input_plugin_curl,
#endif
#ifdef HAVE_FFMPEG
	&input_plugin_ffmpeg,
#endif
#ifdef ENABLE_SMBCLIENT
	&input_plugin_smbclient,
#endif
#ifdef ENABLE_NFS
	&input_plugin_nfs,
#endif
#ifdef ENABLE_MMS
	&input_plugin_mms,
#endif
#ifdef ENABLE_CDIO_PARANOIA
	&input_plugin_cdio_paranoia,
#endif
#ifdef ENABLE_DESPOTIFY
	&input_plugin_despotify,
#endif
	nullptr
};

bool input_plugins_enabled[ARRAY_SIZE(input_plugins) - 1];
