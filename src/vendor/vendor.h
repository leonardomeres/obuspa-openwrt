/**
 * \file vendor.h
 *
 * Header file containing defines controlling the build of USP Agent,
 * which may be modified by the vendor.
 *
 * This file provides vendor-specific functions for interacting with
 * OpenWrt systems.
 */

#ifndef VENDOR_H
#define VENDOR_H


/**
 * \brief Reboots the OpenWrt device.
 *
 * This function initiates a system reboot for an OpenWrt-based device.
 *
 * \return int Returns 0 on success, or a negative error code on failure.
 */
int VENDOR_OpenWrtReboot();

#endif
