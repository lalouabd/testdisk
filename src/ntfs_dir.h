/*

    File: ntfs_dir.h

    Copyright (C) 2005-2006  Christophe GRENIER <grenier@cgsecurity.org>
  
    This software is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
  
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
  
    You should have received a copy of the GNU General Public License along
    with this program; if not, write the Free Software Foundation, Inc., 51
    Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 */
#ifndef _NTFS_DIR_H
#define _NTFS_DIR_H
#ifdef __cplusplus
extern "C" {
#endif

dir_partition_t dir_partition_ntfs_init(disk_t *disk_car, const partition_t *partition, dir_data_t *dir_data, const int verbose, const int expert);
const char*td_ntfs_version(void);

#ifdef __cplusplus
} /* closing brace for extern "C" */
#endif
#endif
