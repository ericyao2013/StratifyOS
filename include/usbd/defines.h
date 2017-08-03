/* Copyright 2011-2016 Tyler Gilbert; 
 * This file is part of Stratify OS.
 *
 * Stratify OS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Stratify OS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Stratify OS.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * 
 */


#ifndef MCU_USBD_DEFINES_H_
#define MCU_USBD_DEFINES_H_

//bmRequestType.dir
#define USBD_REQUEST_TYPE_DIRECTION_HOST_TO_DEVICE 0
#define USBD_REQUEST_TYPE_DIRECTION_DEVICE_TO_HOST 1
//bmRequestType.type
#define USBD_REQUEST_STANDARD 0
#define USBD_REQUEST_TYPE_CLASS 1
#define USBD_REQUEST_TYPE_VENDOR 2
#define USBD_REQUEST_TYPE_RESERVED 3
//bmRequestType.recipient
#define USBD_REQUEST_TYPE_RECIPIENT_DEVICE 0
#define USBD_REQUEST_TYPE_RECIPIENT_INTERFACE 1
#define USBD_REQUEST_TYPE_RECIPIENT_ENDPOINT 2
#define USBD_REQUEST_TYPE_RECIPIENT_OTHER 3

//Standard request values (bRequest)
#define USBD_REQUEST_STANDARD_GET_STATUS 0
#define USBD_REQUEST_STANDARD_CLEAR_FEATURE 1
#define USBD_REQUEST_STANDARD_SET_FEATURE 3
#define USBD_REQUEST_STANDARD_SET_ADDRESS 5
#define USBD_REQUEST_STANDARD_GET_DESCRIPTOR 6
#define USBD_REQUEST_STANDARD_SET_DESCRIPTOR 7
#define USBD_REQUEST_STANDARD_GET_CONFIGURATION 8
#define USBD_REQUEST_STANDARD_SET_CONFIGURATION 9
#define USBD_REQUEST_STANDARD_GET_INTERFACE 10
#define USBD_REQUEST_STANDARD_SET_INTERFACE 11
#define USBD_REQUEST_STANDARD_SYNC_FRAME 12

#define USBD_REQUEST_STANDARD_STATUS_SELF_POWERED 0x01
#define USBD_REQUEST_STANDARD_STATUS_REMOTE_WAKEUP 0x02
#define USBD_REQUEST_STANDARD_STATUS_ENDPOINT_STALL 0x01
#define USBD_REQUEST_STANDARD_FEATURE_ENDPOINT_STALL 0
#define USBD_REQUEST_STANDARD_FEATURE_REMOTE_WAKEUP 1

//bDescriptorType
#define USBD_DESCRIPTOR_TYPE_DEVICE 1
#define USBD_DESCRIPTOR_TYPE_CONFIGURATION 2
#define USBD_DESCRIPTOR_TYPE_STRING 3
#define USBD_DESCRIPTOR_TYPE_INTERFACE 4
#define USBD_DESCRIPTOR_TYPE_ENDPOINT 5
#define USBD_DESCRIPTOR_TYPE_QUALIFIER 6
#define USBD_DESCRIPTOR_TYPE_OTHER_SPEED_CONFIGURATION 7
#define USBD_DESCRIPTOR_TYPE_INTERFACE_POWER 8
#define USBD_DESCRIPTOR_TYPE_OTG 9
#define USBD_DESCRIPTOR_TYPE_DEBUG 10
#define USBD_DESCRIPTOR_TYPE_INTERFACE_ASSOCIATION 11

//Device: bDeviceClass
#define USBD_DEVICE_CLASS_RESERVED 0x00
#define USBD_DEVICE_CLASS_AUDIO 0x01
#define USBD_DEVICE_CLASS_COMMUNICATIONS 0x02
#define USBD_DEVICE_CLASS_HUMAN_INTERFACE 0x03
#define USBD_DEVICE_CLASS_MONITOR 0x04
#define USBD_DEVICE_CLASS_PHYSICAL_INTERFACE 0x05
#define USBD_DEVICE_CLASS_POWER 0x06
#define USBD_DEVICE_CLASS_PRINTER 0x07
#define USBD_DEVICE_CLASS_STORAGE 0x08
#define USBD_DEVICE_CLASS_HUB 0x09
#define USBD_DEVICE_CLASS_MISCELLANEOUS 0xEF
#define USBD_DEVICE_CLASS_DFU 0xEF
#define USBD_DEVICE_CLASS_VENDOR_SPECIFIC 0xFF

#define USBD_INTERFACE_CLASS_COMMUNICATIONS 0x02
#define USBD_INTERFACE_CLASS_COMMUNICATIONS_DATA 0x0A

//Endpoint: bEndpointAddress
#define USBD_ENDPOINT_ADDRESS_DIRECTION_MASK 0x80
#define USBD_ENDPOINT_ADDRESS_OUT (0x00)
#define USBD_ENDPOINT_ADDRESS_IN (0x80)

//Endpoint: bmAttributes
#define USBD_ENDPOINT_ATTRIBUTES_TYPE_MASK 0x03
#define USBD_ENDPOINT_ATTRIBUTES_TYPE_CONTROL 0x00
#define USBD_ENDPOINT_ATTRIBUTES_TYPE_ISOCHRONOUS 0x01
#define USBD_ENDPOINT_ATTRIBUTES_TYPE_BULK 0x02
#define USBD_ENDPOINT_ATTRIBUTES_TYPE_INTERRUPT 0x03
#define USBD_ENDPOINT_ATTRIBUTES_SYNC_MASK 0x0C
#define USBD_ENDPOINT_ATTRIBUTES_SYNC_NO_SYNCHRONIZATION 0x00
#define USBD_ENDPOINT_ATTRIBUTES_SYNC_ASYNCHRONOUS 0x04
#define USBD_ENDPOINT_ATTRIBUTES_SYNC_ADAPTIVE 0x08
#define USBD_ENDPOINT_ATTRIBUTES_SYNC_SYNCHRONOUS 0x0C
#define USBD_ENDPOINT_ATTRIBUTES_USAGE_MASK 0x30
#define USBD_ENDPOINT_ATTRIBUTES_USAGE_DATA 0x00
#define USBD_ENDPOINT_ATTRIBUTES_USAGE_FEEDBACK 0x10
#define USBD_ENDPOINT_ATTRIBUTES_USAGE_IMPLICIT_FEEDBACK 0x20
#define USBD_ENDPOINT_ATTRIBUTES_USAGE_RESERVED 0x30

//Configuration: bmAttributes
#define USBD_CONFIGURATION_ATTRIBUTES_POWERED_MASK 0x40
#define USBD_CONFIGURATION_ATTRIBUTES_BUS_POWERED 0x80
#define USBD_CONFIGURATION_ATTRIBUTES_SELF_POWERED 0xC0
#define USBD_CONFIGURATION_ATTRIBUTES_REMOTE_WAKEUP 0x20

//Configuration: bMaxPower
#define USBD_CONFIGURATION_MAX_POWER_MA(mA) ((mA)/2)


#endif /* MCU_USBD_DEFINES_H_ */

