/* generated common source file - do not edit */
#include "common_data.h"

/***********************************************************************************************************************
 * USB CDC-ACM Interface Descriptor for FS mode g_usb_interface_desc_cdcacm_0
 **********************************************************************************************************************/
#if defined(__GNUC__)
static volatile const unsigned char g_usb_interface_desc_cdcacm_0_full_speed[] BSP_PLACE_IN_SECTION(".usb_interface_desc_fs") BSP_ALIGN_VARIABLE(1)
#else /* __ICCARM__ */
#pragma section = ".usb_interface_desc_fs" 1
__root static const unsigned char g_usb_interface_desc_cdcacm_0_full_speed[] BSP_PLACE_IN_SECTION(".usb_interface_desc_fs")
#endif
=
{
    /****************************************************************
     * Interface Association Descriptor(IAD)                        *
     ****************************************************************/
    0x08, /* 0 bLength */
    UX_INTERFACE_ASSOCIATION_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    0x00, /* 2 bFirstInterface */
    0x02, /* 3 bInterfaceCount */
    0x02, /* 4 bFunctionClass : Communication */
    0x02, /* 5 bFunctionSubClass : Abstract Control Model */
    0x00, /* 6 bFunctionProtocol : Standard or enhanced AT Command set protocol */
    0x00, /* 7 iFunction : String descriptor index */
    /****************************************************************
     * Communication Class Interface Descriptor                     *
     ****************************************************************/
    0x09, /* 0 bLength */
    UX_INTERFACE_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    0x00, /* 2 bInterfaceNumber */
    0x00, /* 3 bAlternateSetting  : Alternate for SetInterface Request */
    0x01, /* 4 bNumEndpoints      : 1 Endpoint for Interface#1 */
    0x02, /* 5 bInterfaceClass    : Communications Interface Class(0x2) */
    0x02, /* 6 bInterfaceSubClass : Abstract Control Model(0x2) */
    0x01, /* 7 bInterfaceProtocol : Common AT command(0x01) */
    0x00, /* 8 iInterface Index */
    /****************************************************************
     * Header Functional Descriptor                                 *
     ****************************************************************/
    0x05, /* 0 bFunctionLength */
    0x24, /* 1 bDescriptorType : CS_INTERFACE(24h) */
    0x00, /* 2 bDescriptorSubtype : Header Functional Descriptor(0x0) */
    0x10, /* 3 bcdCDC Number  0x0110 == 1.10 */
    0x01, /* 4 bcdCDC */
    /****************************************************************
     * Abstract Control Management Functional Functional Descriptor *
     ****************************************************************/
    0x04, /* 0 bFunctionLength */
    0x24, /* 1 bDescriptorType : CS_INTERFACE(24h) */
    0x02, /* 2 bDescriptorSubtype : Abstract Control Management Functional Descriptor(0x2) */
    0x06, /* 3 bmCapabilities (Supports SendBreak, GetLineCoding, SetControlLineState, GetLineCoding) */
    /****************************************************************
     * Union Functional Descriptor                                  *
     ****************************************************************/
    0x05, /* 0 bFunctionLength */
    0x24, /* 1 bDescriptorType : CS_INTERFACE(24h) */
    0x06, /* 2 bDescriptorSubtype : Union Functional Descriptor(0x6) */
    0x00, /* 3 bMasterInterface */
    0x01, /* 4 bSubordinateInterface0 */
    /****************************************************************
     * Call Management Functional Descriptor                        *
     ****************************************************************/
    0x05, /* 0 bFunctionLength */
    0x24, /* 1 bDescriptorType */
    0x01, /* 2 bDescriptorSubtype : Call Management Functional Descriptor(0x1) */
    0x03, /* 3 bmCapabilities */
    0x01, /* 4 bDataInterface */
    /****************************************************************
     * CDC-ACM Endpoint descriptor (Interrupt) for Interface#0      *
     ****************************************************************/
    0x07, /* 0 bLength */
    UX_ENDPOINT_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    (UX_ENDPOINT_IN | 3), /* 2 bEndpointAddress */
    UX_INTERRUPT_ENDPOINT, /* 3 bmAttributes  */
    0x08, /* 4 wMaxPacketSize */
    0x00, /* 5 wMaxPacketSize */
    0x0F, /* 6 bInterval */
    /****************************************************************
     * CDC-ACM Data Class Interface Descriptor                      *
     ****************************************************************/
    0x09, /* 0 bLength */
    UX_INTERFACE_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    0x01, /* 2 bInterfaceNumber */
    0x00, /* 3 bAlternateSetting  : Alternate for SetInterface Request */
    0x02, /* 4 bNumEndpoints      : 2 Endpoints for Interface#0 */
    0x0A, /* 5 bInterfaceClass    : Data Interface Class(0xA) */
    0x00, /* 6 bInterfaceSubClass : Abstract Control Model */
    0x00, /* 7 bInterfaceProtocol : No class specific protocol required */
    0x00, /* 8 iInterface Index   : String descriptor index */
    /****************************************************************
     * CDC-ACM Endpoint Descriptor (Bulk-Out)  for Interface#1      *
     ****************************************************************/
    0x07, /* 0 bLength */
    UX_ENDPOINT_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    (UX_ENDPOINT_OUT | 1), /* 2 bEndpointAddress */
    UX_BULK_ENDPOINT, /* 3 bmAttributes  */
    0x40, /* 4 wMaxPacketSize */
    0x00, /* 5 wMaxPacketSize */
    0x00, /* 6 bInterval */
    /****************************************************************
     * CDC-ACM Endpoint Descriptor (Bulk-In) for Interface#1        *
     ****************************************************************/
    0x07, /* 0 bLength */
    UX_ENDPOINT_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    (UX_ENDPOINT_IN | 2), /* 2 bEndpointAddress */
    UX_BULK_ENDPOINT, /* 3 bmAttributes  */
    0x40, /* 4 wMaxPacketSize */
    0x00, /* 5 wMaxPacketSize */
    0x00, /* 6 bInterval */
};

#if defined(UX_DCD_SYNERY_USE_USBHS)
/***********************************************************************************************************************
 * USB CDC-ACM Interface Descriptor for HS mode g_usb_interface_desc_cdcacm_0
 **********************************************************************************************************************/
#if defined(__GNUC__)
static volatile const unsigned char g_usb_interface_desc_cdcacm_0_high_speed[] BSP_PLACE_IN_SECTION(".usb_interface_desc_hs") BSP_ALIGN_VARIABLE(1)
#else /* __ICCARM__ */
#pragma section = ".usb_interface_desc_hs" 1
__root static const unsigned char g_usb_interface_desc_cdcacm_0_high_speed[] BSP_PLACE_IN_SECTION(".usb_interface_desc_hs")
#endif
=
{
    /****************************************************************
     * Interface Association Descriptor(IAD)                        *
     ****************************************************************/
    0x08, /* 0 bLength */
    UX_INTERFACE_ASSOCIATION_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    0x00, /* 2 bFirstInterface */
    0x02, /* 3 bInterfaceCount */
    0x02, /* 4 bFunctionClass : Communication */
    0x02, /* 5 bFunctionSubClass : Abstract Control Model */
    0x00, /* 6 bFunctionProtocol : Standard or enhanced AT Command set protocol */
    0x00, /* 7 iFunction : String descriptor index */
    /****************************************************************
     * Communication Class Interface Descriptor                     *
     ****************************************************************/
    0x09, /* 0 bLength */
    UX_INTERFACE_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    0x00, /* 2 bInterfaceNumber */
    0x00, /* 3 bAlternateSetting  : Alternate for SetInterface Request */
    0x01, /* 4 bNumEndpoints      : 1 Endpoint for Interface#1 */
    0x02, /* 5 bInterfaceClass    : Communications Interface Class(0x2) */
    0x02, /* 6 bInterfaceSubClass : Abstract Control Model(0x2) */
    0x01, /* 7 bInterfaceProtocol : Common AT command(0x01) */
    0x00, /* 8 iInterface Index */
    /****************************************************************
     * Header Functional Descriptor                                 *
     ****************************************************************/
    0x05, /* 0 bFunctionLength */
    0x24, /* 1 bDescriptorType : CS_INTERFACE(24h) */
    0x00, /* 2 bDescriptorSubtype : Header Functional Descriptor(0x0) */
    0x10, /* 3 bcdCDC Number  0x0110 == 1.10 */
    0x01, /* 4 bcdCDC */
    /****************************************************************
     * Abstract Control Management Functional Functional Descriptor *
     ****************************************************************/
    0x04, /* 0 bFunctionLength */
    0x24, /* 1 bDescriptorType : CS_INTERFACE(24h) */
    0x02, /* 2 bDescriptorSubtype : Abstract Control Management Functional Descriptor(0x2) */
    0x06, /* 3 bmCapabilities (Supports SendBreak, GetLineCoding, SetControlLineState, GetLineCoding) */
    /****************************************************************
     * Union Functional Descriptor                                  *
     ****************************************************************/
    0x05, /* 0 bFunctionLength */
    0x24, /* 1 bDescriptorType : CS_INTERFACE(24h) */
    0x06, /* 2 bDescriptorSubtype : Union Functional Descriptor(0x6) */
    0x00, /* 3 bMasterInterface */
    0x01, /* 4 bSubordinateInterface0 */
    /****************************************************************
     * Call Management Functional Descriptor                        *
     ****************************************************************/
    0x05, /* 0 bFunctionLength */
    0x24, /* 1 bDescriptorType */
    0x01, /* 2 bDescriptorSubtype : Call Management Functional Descriptor(0x1) */
    0x03, /* 3 bmCapabilities */
    0x01, /* 4 bDataInterface */
    /****************************************************************
     * CDC-ACM Endpoint descriptor (Interrupt) for Interface#0      *
     ****************************************************************/
    0x07, /* 0 bLength */
    UX_ENDPOINT_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    (UX_ENDPOINT_IN | 3), /* 2 bEndpointAddress */
    UX_INTERRUPT_ENDPOINT, /* 3 bmAttributes  */
    0x08, /* 4 wMaxPacketSize */
    0x00, /* 5 wMaxPacketSize */
    0x0F, /* 6 bInterval */
    /****************************************************************
     * CDC-ACM Data Class Interface Descriptor                      *
     ****************************************************************/
    0x09, /* 0 bLength */
    UX_INTERFACE_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    0x01, /* 2 bInterfaceNumber */
    0x00, /* 3 bAlternateSetting  : Alternate for SetInterface Request */
    0x02, /* 4 bNumEndpoints      : 2 Endpoints for Interface#0 */
    0x0A, /* 5 bInterfaceClass    : Data Interface Class(0xA) */
    0x00, /* 6 bInterfaceSubClass : Abstract Control Model */
    0x00, /* 7 bInterfaceProtocol : No class specific protocol required */
    0x00, /* 8 iInterface Index   : String descriptor index */
    /****************************************************************
     * CDC-ACM Endpoint Descriptor (Bulk-Out)  for Interface#1      *
     ****************************************************************/
    0x07, /* 0 bLength */
    UX_ENDPOINT_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    (UX_ENDPOINT_OUT | 1), /* 2 bEndpointAddress */
    UX_BULK_ENDPOINT, /* 3 bmAttributes  */
    0x00, /* 4 wMaxPacketSize */
    0x02, /* 5 wMaxPacketSize */
    0x00, /* 6 bInterval */
    /****************************************************************
     * CDC-ACM Endpoint Descriptor (Bulk-In) for Interface#1        *
     ****************************************************************/
    0x07, /* 0 bLength */
    UX_ENDPOINT_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    (UX_ENDPOINT_IN | 2), /* 2 bEndpointAddress */
    UX_BULK_ENDPOINT, /* 3 bmAttributes  */
    0x00, /* 4 wMaxPacketSize */
    0x02, /* 5 wMaxPacketSize */
    0x00, /* 6 bInterval */
};
#endif

/* Size of this USB Interface Descriptor */
#define USB_IFD_SIZE_0x00       (sizeof(g_usb_interface_desc_cdcacm_0_full_speed))
/* Number of Interface this USB Interface Descriptor has */
#define USB_IFD_NUM_0x00        (2)
#ifndef USB_IFD_NUM_0
#define USB_IFD_NUM_0  USB_IFD_NUM_0x00
#define USB_IFD_SIZE_0 USB_IFD_SIZE_0x00
#else
#ifndef USB_IFD_NUM_1
#define USB_IFD_NUM_1  USB_IFD_NUM_0x00
#define USB_IFD_SIZE_1 USB_IFD_SIZE_0x00
#else
#ifndef USB_IFD_NUM_2
#define USB_IFD_NUM_2  USB_IFD_NUM_0x00
#define USB_IFD_SIZE_2 USB_IFD_SIZE_0x00
#else
#ifndef USB_IFD_NUM_3
#define USB_IFD_NUM_3  USB_IFD_NUM_0x00
#define USB_IFD_SIZE_3 USB_IFD_SIZE_0x00
#else
#ifndef USB_IFD_NUM_4
#define USB_IFD_NUM_4  USB_IFD_NUM_0x00
#define USB_IFD_SIZE_4 USB_IFD_SIZE_0x00
#else
#ifndef USB_IFD_NUM_5
#define USB_IFD_NUM_5  USB_IFD_NUM_0x00
#define USB_IFD_SIZE_5 USB_IFD_SIZE_0x00
#else
#ifndef USB_IFD_NUM_6
#define USB_IFD_NUM_6  USB_IFD_NUM_0x00
#define USB_IFD_SIZE_6 USB_IFD_SIZE_0x00
#else
#ifndef USB_IFD_NUM_7
#define USB_IFD_NUM_7  USB_IFD_NUM_0x00
#define USB_IFD_SIZE_7 USB_IFD_SIZE_0x00
#else
#ifndef USB_IFD_NUM_8
#define USB_IFD_NUM_8  USB_IFD_NUM_0x00
#define USB_IFD_SIZE_8 USB_IFD_SIZE_0x00
#else
#ifndef USB_IFD_NUM_9
#define USB_IFD_NUM_9  USB_IFD_NUM_0x00
#define USB_IFD_SIZE_9 USB_IFD_SIZE_0x00
#endif 
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#if defined(__ICCARM__)
#define ux_v2_err_callback_WEAK_ATTRIBUTE
#pragma weak ux_v2_err_callback  = ux_v2_err_callback_internal
#elif defined(__GNUC__)
#define ux_v2_err_callback_WEAK_ATTRIBUTE   __attribute__ ((weak, alias("ux_v2_err_callback_internal")))
#endif
void ux_v2_err_callback(void * p_instance, void * p_data)
ux_v2_err_callback_WEAK_ATTRIBUTE;
/* Static memory pool allocation used by USBX system. */
static CHAR g_ux_pool_memory[18432];
/*******************************************************************************************************************//**
 * @brief      This is a weak example initialization error function.  It should be overridden by defining a user  function 
 *             with the prototype below.
 *             - void ux_v2_err_callback(void * p_instance, void * p_data)
 *
 * @param[in]  p_instance arguments used to identify which instance caused the error and p_data Callback arguments used to identify what error caused the callback.
 **********************************************************************************************************************/
void ux_v2_err_callback_internal(void * p_instance, void * p_data);
void ux_v2_err_callback_internal(void * p_instance, void * p_data)
{
    /** Suppress compiler warning for not using parameters. */
    SSP_PARAMETER_NOT_USED (p_instance);
    SSP_PARAMETER_NOT_USED (p_data);

    /** An error has occurred. Please check function arguments for more information. */
    BSP_CFG_HANDLE_UNRECOVERABLE_ERROR (0);
}

#ifdef UX_HOST_INITIALIZE
/* Function prototype for the function to notify a USB event from the USBX Host system. */
static UINT ux_system_host_change_function(ULONG event, UX_HOST_CLASS * host_class, VOID * instance);

#ifdef USB_HOST_STORAGE_CLASS_REGISTER

/* A semaphore for synchronizing to the USB media storage mount timing. */
static TX_SEMAPHORE ux_host_storage_semaphore_insertion;

/* Temporary storage place for the pointer to a USBX Host Mass Storage Class Instance. */
static UX_HOST_CLASS_STORAGE * g_ux_new_host_storage_instance;

/* Function prototype for the function to register the USBX Host Class Mass Storage. */
static void ux_host_stack_class_register_storage(void);

/* Function prototype for the function to notify changes happened to the USBX Host Class Mass Storage. */
static UINT ux_system_host_storage_change_function(ULONG event, VOID * instance);

/*******************************************************************************************************************//**
 * @brief      This is the function to register the USBX Host Class Mass Storage.
 **********************************************************************************************************************/
static void ux_host_stack_class_register_storage(void)
{
    UINT status;
    status = ux_host_stack_class_register(_ux_system_host_class_storage_name, ux_host_class_storage_entry);
    if (UX_SUCCESS != status)
    {
        ux_v2_err_callback(NULL, &status);
    }

    /* Create semaphores used for the USB Mass Storage Media Initialization. */
    status = tx_semaphore_create(&ux_host_storage_semaphore_insertion, "ux_host_storage_semaphore_insertion", 0);
    if (TX_SUCCESS != status)
    {
        ux_v2_err_callback(NULL, &status);
    }
}

/*******************************************************************************************************************//**
 * @brief      This is the function to notify changes happened to the USBX Host Class Mass Storage.
 * @param[in]  event      Event code from happened to the USBX Host system.
 * @param[in]  instance   Pointer to a USBX Host class instance, which occurs a event.
 * @retval     USBX error code
 **********************************************************************************************************************/
static UINT ux_system_host_storage_change_function(ULONG event, VOID * instance)
{
    if (UX_DEVICE_INSERTION == event) /* Check if there is a device insertion. */
    {
        g_ux_new_host_storage_instance = instance;

        /* Put the semaphore for a USBX Mass Storage Media insertion. */
        tx_semaphore_put (&ux_host_storage_semaphore_insertion);
    }
    else if (UX_DEVICE_REMOVAL == event) /* Check if there is a device removal. */
    {
        g_ux_new_host_storage_instance = NULL;
    }
    return UX_SUCCESS;
}

/*******************************************************************************************************************//**
 * @brief      This is the function to get the FileX Media Control Block for a USB Mass Storage device.
 * @param[in]      new_instance     Pointer to a USBX Host Mass Storage Class instance.
 * @param[in/out]  p_storage_media  Pointer of the pointer to save an instance of the USBX Host Mass Storage Media.
 * @param[in/out]  p_fx_media       Pointer of the pointer to save an instance of FileX Media Control Block.
 * @retval     UX_HOST_CLASS_INSTANCE_UNKNOWN  The instance provided was not for a valid Mass Storage device.
 **********************************************************************************************************************/
UINT ux_system_host_storage_fx_media_get(UX_HOST_CLASS_STORAGE * instance, UX_HOST_CLASS_STORAGE_MEDIA ** p_storage_media,
        FX_MEDIA ** p_fx_media)
{
    UINT error = UX_SUCCESS;
    UX_HOST_CLASS * p_host_class;
    UX_HOST_CLASS_STORAGE_MEDIA * p_storage_media_local;
    FX_MEDIA * p_fx_media_local;
    int index;

    /** Get the USBX Host Mass Storage Class. */
    ux_host_stack_class_get(_ux_system_host_class_storage_name, &p_host_class);

    /** Get the pointer to a media attached to the class container for USB Host Mass Storage. */
    p_storage_media_local = (UX_HOST_CLASS_STORAGE_MEDIA *) p_host_class->ux_host_class_media;

    /** Get the pointer to a FileX Media Control Block. */
    for (index = 0; index < UX_HOST_CLASS_STORAGE_MAX_MEDIA; index++)
    {
        p_fx_media_local = &p_storage_media_local->ux_host_class_storage_media;
        if (p_fx_media_local->fx_media_driver_info != instance)
        {
            /* None of FileX Media Control Blocks matched to this USBX Host Mass Storage Instance. */
            p_storage_media_local++;
        }
        else
        {
            /* Found a FileX Media Control Block used for this USBX Host Mass Storage Instance. */
            break;
        }
    }
    if (UX_HOST_CLASS_STORAGE_MAX_MEDIA == index)
    {
        error = UX_HOST_CLASS_INSTANCE_UNKNOWN;
    }
    else
    {
        *p_storage_media = p_storage_media_local;
        *p_fx_media = p_fx_media_local;
    }

    return error;
}
#endif /* USB_HOST_STORAGE_CLASS_REGISTER */

/*******************************************************************************************************************//**
 * @brief      This is the function to notify a USB event from the USBX Host system.
 * @param[in]  event     Event code from happened to the USBX Host system.
 * @param[in]  usb_class Pointer to a USBX Host class, which occurs a event.
 * @param[in]  instance  Pointer to a USBX Host class instance, which occurs a event.
 * @retval     USBX error code
 **********************************************************************************************************************/
static UINT ux_system_host_change_function(ULONG event, UX_HOST_CLASS * host_class, VOID * instance)
{
    UINT status = UX_SUCCESS;
    SSP_PARAMETER_NOT_USED (event);
    SSP_PARAMETER_NOT_USED (host_class);
    SSP_PARAMETER_NOT_USED (instance);

#if !defined(NULL)
    /* Call user function back for USBX Host Class event notification. */
    status = NULL(event, host_class, instance);
    if (UX_SUCCESS != status)
    {
        return status;
    }
#endif

#ifdef USB_HOST_STORAGE_CLASS_REGISTER
    /* Check the class container if it is for a USBX Host Mass Storage class. */
    if (UX_SUCCESS == _ux_utility_memory_compare(_ux_system_host_class_storage_name, host_class, _ux_utility_string_length_get(_ux_system_host_class_storage_name)))
    {
        status = ux_system_host_storage_change_function(event, instance);
    }
#endif
    return status;
}
#endif

#ifdef USB_HOST_HID_CLASS_REGISTER
/* Function prototype to register USBX Host HID Clients to the USBX Host system. */
static void ux_host_class_hid_clients_register(void);
#endif

/*******************************************************************************************************************//**
 * @brief     Initialization function that the user can choose to have called automatically during thread entry.
 *            The user can call this function at a later time if desired using the prototype below.
 *            - void ux_common_init0(void)
 **********************************************************************************************************************/
void ux_common_init0(void)
{
    UINT status_ux_init;

    /** Initialize the USBX system. */
    status_ux_init = ux_system_initialize ((CHAR *) g_ux_pool_memory, 18432, UX_NULL, 0);
    if (UX_SUCCESS != status_ux_init)
    {
        ux_v2_err_callback (NULL, &status_ux_init);
    }

#ifdef UX_HOST_INITIALIZE
    /** Initialize the USBX Host stack. */
    status_ux_init = ux_host_stack_initialize(ux_system_host_change_function);
    if (UX_SUCCESS != status_ux_init)
    {
        ux_v2_err_callback(NULL,&status_ux_init);
    }

    /** Register USB Host classes. */
#ifdef USB_HOST_HUB_CLASS_REGISTER
    status_ux_init = ux_host_stack_class_register(_ux_system_host_class_hub_name, ux_host_class_hub_entry);
    if (UX_SUCCESS != status_ux_init)
    {
        ux_v2_err_callback(NULL,&status_ux_init);
    }
#endif

#ifdef USB_HOST_CDC_ACM_CLASS_REGISTER
    status_ux_init = ux_host_stack_class_register(_ux_system_host_class_cdc_acm_name, ux_host_class_cdc_acm_entry);
    if (UX_SUCCESS != status_ux_init)
    {
        ux_v2_err_callback(NULL,&status_ux_init);
    }
#endif

#ifdef USB_HOST_HID_CLASS_REGISTER
    status_ux_init = ux_host_stack_class_register(_ux_system_host_class_hid_name, ux_host_class_hid_entry);
    if (UX_SUCCESS != status_ux_init)
    {
        ux_v2_err_callback(NULL,&status_ux_init);
    }

    ux_host_class_hid_clients_register ();
#endif

#ifdef USB_HOST_STORAGE_CLASS_REGISTER
    ux_host_stack_class_register_storage();
#endif
#endif /* UX_HOST_INITIALIZE */
}
#if defined(__ICCARM__)
#define g_sf_el_ux_dcd_fs_0_err_callback_WEAK_ATTRIBUTE
#pragma weak g_sf_el_ux_dcd_fs_0_err_callback  = g_sf_el_ux_dcd_fs_0_err_callback_internal
#elif defined(__GNUC__)
#define g_sf_el_ux_dcd_fs_0_err_callback_WEAK_ATTRIBUTE   __attribute__ ((weak, alias("g_sf_el_ux_dcd_fs_0_err_callback_internal")))
#endif
void g_sf_el_ux_dcd_fs_0_err_callback(void * p_instance, void * p_data)
g_sf_el_ux_dcd_fs_0_err_callback_WEAK_ATTRIBUTE;
#if (SF_EL_UX_CFG_FS_IRQ_IPL != BSP_IRQ_DISABLED)
/* USBFS ISR vector registering. */
#if !defined(SSP_SUPPRESS_ISR_g_sf_el_ux_dcd_fs_0) && !defined(SSP_SUPPRESS_ISR_USB)
SSP_VECTOR_DEFINE_UNIT(usbfs_int_isr, USB, FS, INT, 0);
#endif
#endif

/* Prototype function for USBX DCD Initializer. */
static void ux_dcd_initialize(void);

#undef SYNERGY_NOT_DEFINED
#define SYNERGY_NOT_DEFINED (1)
/*******************************************************************************************************************//**
 * @brief      This is a weak example initialization error function.  It should be overridden by defining a user  function 
 *             with the prototype below.
 *             - void g_sf_el_ux_dcd_fs_0_err_callback(void * p_instance, void * p_data)
 *
 * @param[in]  p_instance arguments used to identify which instance caused the error and p_data Callback arguments used to identify what error caused the callback.
 **********************************************************************************************************************/
void g_sf_el_ux_dcd_fs_0_err_callback_internal(void * p_instance, void * p_data);
void g_sf_el_ux_dcd_fs_0_err_callback_internal(void * p_instance, void * p_data)
{
    /** Suppress compiler warning for not using parameters. */
    SSP_PARAMETER_NOT_USED (p_instance);
    SSP_PARAMETER_NOT_USED (p_data);

    /** An error has occurred. Please check function arguments for more information. */
    BSP_CFG_HANDLE_UNRECOVERABLE_ERROR (0);
}
#if ((SYNERGY_NOT_DEFINED != SYNERGY_NOT_DEFINED) && (SYNERGY_NOT_DEFINED != SYNERGY_NOT_DEFINED))
/***********************************************************************************************************************
 * The definition of wrapper interface for USBX Synergy Port DCD Driver to get a transfer module instance.
 **********************************************************************************************************************/
static UINT g_sf_el_ux_dcd_fs_0_initialize_transfer_support(ULONG dcd_io)
{
    UX_DCD_SYNERGY_TRANSFER dcd_transfer;
    dcd_transfer.ux_synergy_transfer_tx = (transfer_instance_t *)&SYNERGY_NOT_DEFINED;
    dcd_transfer.ux_synergy_transfer_rx = (transfer_instance_t *)&SYNERGY_NOT_DEFINED;
    return (UINT)ux_dcd_synergy_initialize_transfer_support(dcd_io, (UX_DCD_SYNERGY_TRANSFER *)&dcd_transfer);
} /* End of function g_sf_el_ux_dcd_fs_0_initialize_transfer_support() */
#endif

/***********************************************************************************************************************
 * Initializes USBX Device Controller Driver.
 **********************************************************************************************************************/
void ux_dcd_initialize(void)
{
    UINT status;
    /* Initializes the USB device controller, enabling DMA transfer if transfer module instances are given. */
#if ((SYNERGY_NOT_DEFINED == SYNERGY_NOT_DEFINED) || (SYNERGY_NOT_DEFINED == SYNERGY_NOT_DEFINED))
    status = (UINT) ux_dcd_synergy_initialize (R_USBFS_BASE);
#else
    status = g_sf_el_ux_dcd_fs_0_initialize_transfer_support(R_USBFS_BASE);
#endif
#undef SYNERGY_NOT_DEFINED
    if (UX_SUCCESS != status)
    {
        g_sf_el_ux_dcd_fs_0_err_callback (NULL, &status);
    }
} /* End of function ux_dcd_initialize() */
#if defined(__ICCARM__)
#define ux_device_err_callback_WEAK_ATTRIBUTE
#pragma weak ux_device_err_callback  = ux_device_err_callback_internal
#elif defined(__GNUC__)
#define ux_device_err_callback_WEAK_ATTRIBUTE   __attribute__ ((weak, alias("ux_device_err_callback_internal")))
#endif
void ux_device_err_callback(void * p_instance, void * p_data)
ux_device_err_callback_WEAK_ATTRIBUTE;
/* Definition for the special linker section for USB */
#if defined(__GNUC__)
extern uint32_t __usb_dev_descriptor_start_fs;
extern uint32_t __usb_descriptor_end_fs;
#if defined(UX_DCD_SYNERY_USE_USBHS)
extern uint32_t __usb_dev_descriptor_start_hs;
extern uint32_t __usb_descriptor_end_hs;
#endif
#endif

/* Counter to calculate number of Interfaces */
static uint8_t g_usbx_number_of_interface_count = 0;

/***********************************************************************************************************************
 * USB Device Descriptor for FS mode
 **********************************************************************************************************************/
#if defined(__GNUC__)
static volatile const unsigned char device_framework_full_speed[] BSP_PLACE_IN_SECTION(".usb_device_desc_fs") BSP_ALIGN_VARIABLE(1)
#else /* __ICCARM__ */
#pragma section = ".usb_device_desc_fs" 1
__root static const unsigned char device_framework_full_speed[] BSP_PLACE_IN_SECTION(".usb_device_desc_fs")
#endif
=
{
    0x12, /* 0 bLength */
    UX_DEVICE_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    0x00, /* 2 bcdUSB BCD(2.0) */
    0x02, /* 3 bcdUSB */
    0xEF, /* 4 bDeviceClass    : Device Class */
#if (0xEF == 0x00) || (0xEF == 0x02) || (0xEF == 0x03) || (0xEF == 0x08)
    0x00, /* 5 bDeviceSubClass : none */
    0x00, /* 6 bDeviceProtocol : none */
#elif (0xEF == 0xEF)
    0x02, /* 5 bDeviceSubClass : Common Class(0x02) */
    0x01, /* 6 bDeviceProtocol :Interface Association Descriptor(IAD) */
#elif (0xEF == 0xFF)
    0x00, /* 5 bDeviceSubClass : none */
    0x00, /* 6 bDeviceProtocol : none */
#endif
    0x40, /* 7 bMaxPacketSize0 */
    (uint8_t)(0x045B), /* 8 idVendor */
    (uint8_t)(0x045B >> 8), /* 9 idVendor */
    (uint8_t)(0x0238), /* 10 idProduct */
    (uint8_t)(0x0238 >> 8), /* 11 idProduct */
    (uint8_t)(0x0000), /* 12 bcdDevice */
    (uint8_t)(0x0000 >> 8), /* 13 bcdDevice */
    0x00, /* 14 iManufacturer */
    0x00, /* 15 iProduct */
    0x00, /* 16 iSerialNumber */
    0x01, /* 17 bNumConfigurations */
};

#if defined(UX_DCD_SYNERY_USE_USBHS)
/***********************************************************************************************************************
 * USB Device Descriptor for HS Mode
 **********************************************************************************************************************/
#if defined(__GNUC__)
static volatile const unsigned char device_framework_high_speed[] BSP_PLACE_IN_SECTION(".usb_device_desc_hs") BSP_ALIGN_VARIABLE(1)
#else /* __ICCARM__ */
#pragma section = ".usb_device_desc_hs" 1
__root static const unsigned char device_framework_high_speed[] BSP_PLACE_IN_SECTION(".usb_device_desc_hs")
#endif
=
{
    0x12, /* 0 bLength */
    UX_DEVICE_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    0x00, /* 2 bcdUSB BCD(2.0) */
    0x02, /* 3 bcdUSB */
    0xEF, /* 4 bDeviceClass    : Device Class */
#if (0xEF == 0x00) || (0xEF == 0x02) || (0xEF == 0x03) || (0xEF == 0x08)
    0x00, /* 5 bDeviceSubClass : none */
    0x00, /* 6 bDeviceProtocol : none */
#elif (0xEF == 0xEF) /* Composite device */
    0x02, /* 5 bDeviceSubClass : Common Class(0x02) */
    0x01, /* 6 bDeviceProtocol :Interface Association Descriptor(IAD) */
#elif (0xEF == 0xFF) /* Vendor specific device */
    0x00, /* 5 bDeviceSubClass : none */
    0x00, /* 6 bDeviceProtocol : none */
#endif
    0x40, /* 7 bMaxPacketSize0 */
    (uint8_t)(0x045B), /* 8 idVendor */
    (uint8_t)(0x045B >> 8), /* 9 idVendor */
    (uint8_t)(0x0238), /* 10 idProduct */
    (uint8_t)(0x0238 >> 8), /* 11 idProduct */
    (uint8_t)(0x0000), /* 12 bcdDevice */
    (uint8_t)(0x0000 >> 8), /* 13 bcdDevice */
    0x00, /* 14 iManufacturer */
    0x00, /* 15 iProduct */
    0x00, /* 16 iSerialNumber */
    0x01, /* 17 bNumConfigurations */
    /****************************************************************
     * Device qualifier descriptor                                  *
     ****************************************************************/
    0x0a, /* 0 bLength */
    UX_DEVICE_QUALIFIER_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    0x00, /* 2 bcdUSB BCD(2.0) */
    0x02, /* 3 bcdUSB */
    0xEF, /* 4 bDeviceClass    : Device Class */
#if (0xEF == 0x00) || (0xEF == 0x02) || (0xEF == 0x03) || (0xEF == 0x08)
    0x00, /* 5 bDeviceSubClass : none */
    0x00, /* 6 bDeviceProtocol : none */
#elif (0xEF == 0xEF)
    0x02, /* 5 bDeviceSubClass : Common Class(0x02) */
    0x00, /* 6 bDeviceProtocol : none */
#elif (0xEF == 0xFF)
    0x00, /* 5 bDeviceSubClass : none */
    0x00, /* 6 bDeviceProtocol : none */
#endif
    0x40, /* 7 bMaxPacketSize0 */
    0x01, /* 8 bNumConfigs : 1 */
    0x00, /* 9 Reserve, fixed to 0 */
};
#endif

/***********************************************************************************************************************
 * Configuration Value Auto-calculation for USB Configuration Descriptor
 **********************************************************************************************************************/
#ifndef USB_IFD_NUM_0
#define USB_IFD_NUM_0  (0)
#define USB_IFD_SIZE_0 (0)
#endif
#ifndef USB_IFD_NUM_1
#define USB_IFD_NUM_1  (0)
#define USB_IFD_SIZE_1 (0)
#endif
#ifndef USB_IFD_NUM_2
#define USB_IFD_NUM_2  (0)
#define USB_IFD_SIZE_2 (0)
#endif
#ifndef USB_IFD_NUM_3
#define USB_IFD_NUM_3  (0)
#define USB_IFD_SIZE_3 (0)
#endif
#ifndef USB_IFD_NUM_4
#define USB_IFD_NUM_4  (0)
#define USB_IFD_SIZE_4 (0)
#endif
#ifndef USB_IFD_NUM_5
#define USB_IFD_NUM_5  (0)
#define USB_IFD_SIZE_5 (0)
#endif
#ifndef USB_IFD_NUM_6
#define USB_IFD_NUM_6  (0)
#define USB_IFD_SIZE_6 (0)
#endif
#ifndef USB_IFD_NUM_7
#define USB_IFD_NUM_7  (0)
#define USB_IFD_SIZE_7 (0)
#endif
#ifndef USB_IFD_NUM_8
#define USB_IFD_NUM_8  (0)
#define USB_IFD_SIZE_8 (0)
#endif
#ifndef USB_IFD_NUM_9
#define USB_IFD_NUM_9  (0)
#define USB_IFD_SIZE_9 (0)
#endif

#define USB_NUMBER_OF_INTERFACE USB_IFD_NUM_0 + USB_IFD_NUM_1 + USB_IFD_NUM_2 + USB_IFD_NUM_3 + USB_IFD_NUM_4 + USB_IFD_NUM_5 + USB_IFD_NUM_6 + USB_IFD_NUM_7 + USB_IFD_NUM_8 + USB_IFD_NUM_9
#define USB_TOTAL_LENGTH        USB_IFD_SIZE_0 + USB_IFD_SIZE_1 + USB_IFD_SIZE_2 + USB_IFD_SIZE_3 + USB_IFD_SIZE_4 + USB_IFD_SIZE_5 + USB_IFD_SIZE_6 + USB_IFD_SIZE_7 + USB_IFD_SIZE_8 + USB_IFD_SIZE_9

#if (0 != 0x00)
#define USB_CFG_DESCRIPTOR_bNumInterfaces     (0x00)
#else
#define USB_CFG_DESCRIPTOR_bNumInterfaces     (USB_NUMBER_OF_INTERFACE)
#endif
#if (0 != 0x00)
#define USB_CFG_DESCRIPTOR_wTotalLength       (0x00)
#else
#define USB_CFG_DESCRIPTOR_wTotalLength       (0x09 + USB_TOTAL_LENGTH)
#endif

/***********************************************************************************************************************
 * Consolidated USB Device Descriptor Framework on RAM for IAR build
 **********************************************************************************************************************/
#ifdef __ICCARM__
/* Memory area to complete USB device Descriptor Framework. */
static uint8_t device_framework_full_speed_ram[0x12 + USB_CFG_DESCRIPTOR_wTotalLength];
#if defined(UX_DCD_SYNERY_USE_USBHS)
static uint8_t device_framework_high_speed_ram[0x12 + 0x0a + USB_CFG_DESCRIPTOR_wTotalLength];
#endif
#endif

/***********************************************************************************************************************
 * USB Configuration Descriptor for FS mode
 **********************************************************************************************************************/
#if defined(__GNUC__)
static volatile const unsigned char ux_cfg_descriptor_full_speed[] BSP_PLACE_IN_SECTION(".usb_config_desc_fs") BSP_ALIGN_VARIABLE(1)
#else /* __ICCARM__ */
#pragma section = ".usb_config_desc_fs" 1
__root static const unsigned char ux_cfg_descriptor_full_speed[] BSP_PLACE_IN_SECTION(".usb_config_desc_fs")
#endif
=
{
    0x09, /* 0 bLength */
    UX_CONFIGURATION_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    (uint8_t)(USB_CFG_DESCRIPTOR_wTotalLength), /* 2 wTotalLength : This will be calculated at run-time. */
    (uint8_t)(USB_CFG_DESCRIPTOR_wTotalLength >> 8), /* 3 wTotalLength : This will be calculated at run-time. */
    (uint8_t)(USB_CFG_DESCRIPTOR_bNumInterfaces), /* 4 bNumInterfaces */
    0x01, /* 5 bConfigurationValue : Fixed to 1 since only one configuration is supported. */
    0x00, /* 6 iConfiguration */
    0x80 | (1 << 6) | (0 << 5), /* 7 bmAttributes */
    50, /* 8 bMaxPower */
};

#if defined(UX_DCD_SYNERY_USE_USBHS)
/***********************************************************************************************************************
 * USB Configuration Descriptor for HS mode
 **********************************************************************************************************************/
#if defined(__GNUC__)
static volatile const unsigned char ux_cfg_descriptor_high_speed[] BSP_PLACE_IN_SECTION(".usb_config_desc_hs") BSP_ALIGN_VARIABLE(1)
#else /* __ICCARM__ */
#pragma section = ".usb_config_desc_hs" 1
__root static const unsigned char ux_cfg_descriptor_high_speed[] BSP_PLACE_IN_SECTION(".usb_config_desc_hs")
#endif
=
{
    0x09, /* 0 bLength */
    UX_CONFIGURATION_DESCRIPTOR_ITEM, /* 1 bDescriptorType */
    (uint8_t)(USB_CFG_DESCRIPTOR_wTotalLength), /* 2 wTotalLength : This will be calculated at run-time. */
    (uint8_t)(USB_CFG_DESCRIPTOR_wTotalLength >> 8), /* 3 wTotalLength : This will be calculated at run-time. */
    (uint8_t)(USB_CFG_DESCRIPTOR_bNumInterfaces), /* 4 bNumInterfaces */
    0x01, /* 5 bConfigurationValue : Fixed to 1 since only one configuration is supported. */
    0x00, /* 6 iConfiguration */
    0x80 | (1 << 6) | (0 << 5), /* 7 bmAttributes */
    50, /* 8 bMaxPower */
};
#endif

/***********************************************************************************************************************
 * USB Language Framework (Default setting for US English)
 **********************************************************************************************************************/
#if(0 == 0) /* Create USB Language Framework with default setting if not defined by user. */
static volatile const UCHAR language_id_framework_default[] =
{ (uint8_t) (0x0409), /* Supported Language Code */
  (uint8_t) (0x0409 >> 8) /* US English as the default */
};
#endif

/***********************************************************************************************************************
 * Function to get size of USB String Descriptor
 **********************************************************************************************************************/
#if (0)
extern const UCHAR NULL[];
static ULONG ux_device_string_descriptor_size_get(void)
{
    ULONG size = 0;
    UCHAR * ptr = (UCHAR *)NULL;
    if(NULL != ptr)
    {
        for(INT i = 0; i < 0; i++)
        {
            ptr = ptr + 3; /* bLength at byte offset 3 */
            /* Counts bLength + Language code(2bytes) + bLength(1byte) */
            size = size + *ptr + 4;
            ptr = ptr + (*ptr) + 1;
        }
    }
    return size;
}
#endif

#if (0)
extern const UCHAR NULL[];
#endif
/*******************************************************************************************************************//**
 * @brief      This is a weak example initialization error function.  It should be overridden by defining a user  function 
 *             with the prototype below.
 *             - void ux_device_err_callback(void * p_instance, void * p_data)
 *
 * @param[in]  p_instance arguments used to identify which instance caused the error and p_data Callback arguments used to identify what error caused the callback.
 **********************************************************************************************************************/
void ux_device_err_callback_internal(void * p_instance, void * p_data);
void ux_device_err_callback_internal(void * p_instance, void * p_data)
{
    /** Suppress compiler warning for not using parameters. */
    SSP_PARAMETER_NOT_USED (p_instance);
    SSP_PARAMETER_NOT_USED (p_data);

    /** An error has occurred. Please check function arguments for more information. */
    BSP_CFG_HANDLE_UNRECOVERABLE_ERROR (0);
}
/*******************************************************************************************************************//**
 * @brief     Initialization function that the user can choose to have called automatically during thread entry.
 *            The user can call this function at a later time if desired using the prototype below.
 *            - void ux_device_init0(void)
 **********************************************************************************************************************/
void ux_device_init0(void)
{

    UINT status_ux_device_init;

    /** Calculate the size of USBX String Framework. */
    ULONG string_framework_size;
    UCHAR * p_string_framework;

#if(0) /* Check if the number of index in USBX String Framework is greater than zero. */
    {
        p_string_framework = (UCHAR *)NULL;
        string_framework_size = ux_device_string_descriptor_size_get();
    }
#else
    {
        p_string_framework = NULL;
        string_framework_size = 0;
    }
#endif

    /** Calculate the size of USB Language Framework. */
    ULONG language_framework_size;
    UCHAR * p_language_framework;

#if(0) /* Check if the number of index in USB Language Framework is greater than zero. */
    {
        p_language_framework = (UCHAR *)NULL;
        language_framework_size = 0 * 2;
    }
#else
    {
        p_language_framework = (UCHAR *) language_id_framework_default;
        language_framework_size = 2;
    }
#endif

    /** Initialize the USB Device stack. */
#ifdef __GNUC__
    status_ux_device_init = ux_device_stack_initialize(
#if defined(UX_DCD_SYNERY_USE_USBHS)
            (UCHAR *)device_framework_high_speed, ((uint32_t)&__usb_descriptor_end_hs - (uint32_t)&__usb_dev_descriptor_start_hs),
#else /* If USB DCD runs in FS mode, USB Device Descriptor for HS mode is not required. */
            NULL, 0,
#endif
            (UCHAR *)device_framework_full_speed, ((uint32_t)&__usb_descriptor_end_fs - (uint32_t)&__usb_dev_descriptor_start_fs),
            p_string_framework, string_framework_size,
            p_language_framework, language_framework_size, UX_NULL);
#else /* __ICCARM__ */

    uint8_t * p_device_framework;
#if defined(UX_DCD_SYNERY_USE_USBHS)
    p_device_framework = (uint8_t *)device_framework_high_speed_ram;
    memcpy (p_device_framework, device_framework_high_speed, sizeof(device_framework_high_speed));
    p_device_framework = p_device_framework + sizeof(device_framework_high_speed);
    memcpy (p_device_framework, ux_cfg_descriptor_high_speed, sizeof(ux_cfg_descriptor_high_speed));
    p_device_framework = p_device_framework + sizeof(ux_cfg_descriptor_high_speed);
    memcpy (p_device_framework, (uint8_t *)__section_begin(".usb_interface_desc_hs"), USB_TOTAL_LENGTH);
#endif

    /* Creates Device Descriptor Frameworks copying Descriptors from ROM. */
    p_device_framework = (uint8_t *) device_framework_full_speed_ram;
    memcpy (p_device_framework, device_framework_full_speed, sizeof(device_framework_full_speed));
    p_device_framework = p_device_framework + sizeof(device_framework_full_speed);
    /* Copy Configuration Descriptor */
    memcpy (p_device_framework, ux_cfg_descriptor_full_speed, sizeof(ux_cfg_descriptor_full_speed));
    p_device_framework = p_device_framework + sizeof(ux_cfg_descriptor_full_speed);
    /* Copy Interface Descriptors */
    memcpy (p_device_framework, (uint8_t *) __section_begin (".usb_interface_desc_fs"), USB_TOTAL_LENGTH);

    status_ux_device_init = ux_device_stack_initialize (
#if defined(UX_DCD_SYNERY_USE_USBHS)
            (UCHAR *)device_framework_high_speed_ram, (0x12 + 0x0a + USB_CFG_DESCRIPTOR_wTotalLength),
#else /* If USB DCD runs in FS mode, USB Device Descriptor for HS mode is not required. */
            NULL,
            0,
#endif
            (UCHAR *) device_framework_full_speed_ram,
            (0x12 + USB_CFG_DESCRIPTOR_wTotalLength), p_string_framework, string_framework_size, p_language_framework,
            language_framework_size, UX_NULL);
#endif
    if (UX_SUCCESS != status_ux_device_init)
    {
        ux_device_err_callback (NULL, &status_ux_device_init);
    }

}
/***********************************************************************************************************************
 * Function prototypes for USBX CDC-ACM
 **********************************************************************************************************************/
static void g_ux_device_class_cdc_acm0_setup(void);

/***********************************************************************************************************************
 * USBX CDC-ACM Parameter Setup Function.
 **********************************************************************************************************************/
static UX_SLAVE_CLASS_CDC_ACM_PARAMETER g_ux_device_class_cdc_acm0_parameter;
void g_ux_device_class_cdc_acm0_setup(void)
{
    g_ux_device_class_cdc_acm0_parameter.ux_slave_class_cdc_acm_instance_activate = ux_cdc_device0_instance_activate;
    g_ux_device_class_cdc_acm0_parameter.ux_slave_class_cdc_acm_instance_deactivate =
            ux_cdc_device0_instance_deactivate;
    /* Initializes the device cdc class. */
    ux_device_stack_class_register (_ux_system_slave_class_cdc_acm_name, ux_device_class_cdc_acm_entry, 1, 0x00,
                                    (VOID *) &g_ux_device_class_cdc_acm0_parameter);

    /* Counts up the number of Interfaces. */
    g_usbx_number_of_interface_count = (uint8_t) (g_usbx_number_of_interface_count + 2);
}
/*******************************************************************************************************************//**
 * @brief     Initialization function that the user can choose to have called automatically during thread entry.
 *            The user can call this function at a later time if desired using the prototype below.
 *            - void ux_device_class_cdc_acm_init0(void)
 **********************************************************************************************************************/
void ux_device_class_cdc_acm_init0(void)
{
    /* Setups USB CDC-ACM Class to create the instance */
    g_ux_device_class_cdc_acm0_setup ();

    /* USB DCD initialization (Only executed once after all the class registration completed). */
    if (g_usbx_number_of_interface_count == USB_NUMBER_OF_INTERFACE)
    {
        /* Initializes USBX Device Control Driver */
        ux_dcd_initialize ();
    }
}
#if !defined(SYNERGY_NOT_DEFINED_INDEX)
#define SYNERGY_NOT_DEFINED_INDEX (0xFFFFFFFF)
#endif

#if (DATA_SOURCE == DATA_SOURCE_SSPCONFIG)
/* Uninitialized Buffers and Settings */
uint16_t g_ctsu_data_buffer[MUTUAL0_RD_SIZE];
ctsu_sensor_setting_t g_ctsu_sensor_settings[MUTUAL0_NUM] =
{
#if defined(g_ctsu0_INDEX_0)
        [0] = g_ctsu0_INDEX_0_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_1)
        [1] = g_ctsu0_INDEX_1_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_2)
        [2] = g_ctsu0_INDEX_2_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_3)
        [3] = g_ctsu0_INDEX_3_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_4)
        [4] = g_ctsu0_INDEX_4_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_5)
        [5] = g_ctsu0_INDEX_5_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_6)
        [6] = g_ctsu0_INDEX_6_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_7)
        [7] = g_ctsu0_INDEX_7_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_8)
        [8] = g_ctsu0_INDEX_8_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_9)
        [9] = g_ctsu0_INDEX_9_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_10)
        [10] = g_ctsu0_INDEX_10_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_11)
        [11] = g_ctsu0_INDEX_11_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_12)
        [12] = g_ctsu0_INDEX_12_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_13)
        [13] = g_ctsu0_INDEX_13_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_14)
        [14] = g_ctsu0_INDEX_14_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_15)
        [15] = g_ctsu0_INDEX_15_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_16)
        [16] = g_ctsu0_INDEX_16_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_17)
        [17] = g_ctsu0_INDEX_17_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_18)
        [18] = g_ctsu0_INDEX_18_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_19)
        [19] = g_ctsu0_INDEX_19_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_20)
        [20] = g_ctsu0_INDEX_20_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_21)
        [21] = g_ctsu0_INDEX_21_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_22)
        [22] = g_ctsu0_INDEX_22_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_23)
        [23] = g_ctsu0_INDEX_23_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_24)
        [24] = g_ctsu0_INDEX_24_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_25)
        [25] = g_ctsu0_INDEX_25_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_26)
        [26] = g_ctsu0_INDEX_26_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_27)
        [27] = g_ctsu0_INDEX_27_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_28)
        [28] = g_ctsu0_INDEX_28_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_29)
        [29] = g_ctsu0_INDEX_29_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_30)
        [30] = g_ctsu0_INDEX_30_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_31)
        [31] = g_ctsu0_INDEX_31_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_32)
        [32] = g_ctsu0_INDEX_32_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_33)
        [33] = g_ctsu0_INDEX_33_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_34)
        [34] = g_ctsu0_INDEX_34_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_35)
        [35] = g_ctsu0_INDEX_35_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_36)
        [36] = g_ctsu0_INDEX_36_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_37)
        [37] = g_ctsu0_INDEX_37_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_38)
        [38] = g_ctsu0_INDEX_38_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_39)
        [39] = g_ctsu0_INDEX_39_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_40)
        [40] = g_ctsu0_INDEX_40_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_41)
        [41] = g_ctsu0_INDEX_41_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_42)
        [42] = g_ctsu0_INDEX_42_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_43)
        [43] = g_ctsu0_INDEX_43_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_44)
        [44] = g_ctsu0_INDEX_44_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_45)
        [45] = g_ctsu0_INDEX_45_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_46)
        [46] = g_ctsu0_INDEX_46_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_47)
        [47] = g_ctsu0_INDEX_47_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_48)
        [48] = g_ctsu0_INDEX_48_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_49)
        [49] = g_ctsu0_INDEX_49_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_50)
        [50] = g_ctsu0_INDEX_50_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_51)
        [51] = g_ctsu0_INDEX_51_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_52)
        [52] = g_ctsu0_INDEX_52_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_53)
        [53] = g_ctsu0_INDEX_53_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_54)
        [54] = g_ctsu0_INDEX_54_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_55)
        [55] = g_ctsu0_INDEX_55_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_56)
        [56] = g_ctsu0_INDEX_56_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_57)
        [57] = g_ctsu0_INDEX_57_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_58)
        [58] = g_ctsu0_INDEX_58_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_59)
        [59] = g_ctsu0_INDEX_59_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_60)
        [60] = g_ctsu0_INDEX_60_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_61)
        [61] = g_ctsu0_INDEX_61_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_62)
        [62] = g_ctsu0_INDEX_62_CTSU_SFRS,
#endif
#if defined(g_ctsu0_INDEX_63)
        [63] = g_ctsu0_INDEX_63_CTSU_SFRS,
#endif
    };

#undef SYNERGY_NOT_DEFINED_INDEX

ctsu_const_sfrs_t g_ctsu_common_sfrs =
{
#if (CTSU_CFG_MODE==CTSU_CFG_MODE_SELF)
  .ctsucr0.byte = 0,
#else
  .ctsucr0.byte = MUTUAL0_CTSUTXVSEL<<7,
#endif
  .ctsucr1.byte = ((CTSUMD_SFR << 6) | (MUTUAL0_PCLK << 4) | (MUTUAL0_CTSUATUNE1 << 3) | (MUTUAL0_CTSUATUNE0 << 2)
          | (1 << 1) | (1 << 0)),
  .ctsusdprs.byte = ((MUTUAL0_CTSUSOFF << 6) | (MUTUAL0_CTSUPRMODE << 4) | (MUTUAL0_CTSUPRRATIO << 0)), .ctsusst.byte =
          (_00010000_CTSUSST_RECOMMEND),
  .ctsuchac0.byte = CTSUCHAC0_MUTUAL0_ENABLE_TS, .ctsuchac1.byte = CTSUCHAC1_MUTUAL0_ENABLE_TS, .ctsuchac2.byte =
          CTSUCHAC2_MUTUAL0_ENABLE_TS,
  .ctsuchac3.byte = CTSUCHAC3_MUTUAL0_ENABLE_TS, .ctsuchac4.byte = CTSUCHAC4_MUTUAL0_ENABLE_TS,
#if (CTSU_CFG_MODE==CTSU_CFG_MODE_MUTUAL)
  .ctsuchtrc0.byte = CTSUCHTRC0_MUTUAL0_TRANSMIT_TS,
  .ctsuchtrc1.byte = CTSUCHTRC1_MUTUAL0_TRANSMIT_TS, .ctsuchtrc2.byte = CTSUCHTRC2_MUTUAL0_TRANSMIT_TS,
  .ctsuchtrc3.byte = CTSUCHTRC3_MUTUAL0_TRANSMIT_TS, .ctsuchtrc4.byte = CTSUCHTRC4_MUTUAL0_TRANSMIT_TS,
#endif
  .ctsudclkc.byte = ((_11_CTSUSSCNT << 4) | (_00_CTSUSSMOD << 0)), };

ctsu_cfg_t const g_ctsu0_cfg =
{ .p_ctsu_settings = &g_ctsu_common_sfrs, .p_sensor_settings = &g_ctsu_sensor_settings[0], .p_sensor_data =
          &g_ctsu_data_buffer[0],
  .pclkb_hz = 24000000, .p_callback = NULL, };

ctsu_instance_ctrl_t g_ctsu0_ctrl;

ctsu_instance_t const g_ctsu0 =
{ .p_ctrl = &g_ctsu0_ctrl, .p_cfg = &g_ctsu0_cfg, .p_api = &g_ctsu_on_ctsu, };

#endif /* (DATA_SOURCE == DATA_SOURCE_SSPCONFIG) */

#if (DATA_SOURCE == DATA_SOURCE_SSPCONFIG)
static touch_common_parameter_t g_touch0_on_g_ctsu_common_parameter =
{ .drift_hold_limit = 0 /* SYNERGY_NOT_DEFINED */, .on_limit = 65535, .max_touched_sensors = 1, };

touch_sensor_parameter_t g_touch0_on_g_ctsu_sensor_parameter[MUTUAL0_NUM] =
{
#if defined (g_ctsu0_INDEX_0)
        [g_ctsu0_INDEX_0] = g_ctsu0_INDEX_0_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_1)
        [g_ctsu0_INDEX_1] = g_ctsu0_INDEX_1_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_2)
        [g_ctsu0_INDEX_2] = g_ctsu0_INDEX_2_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_3)
        [g_ctsu0_INDEX_3] = g_ctsu0_INDEX_3_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_4)
        [g_ctsu0_INDEX_4] = g_ctsu0_INDEX_4_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_5)
        [g_ctsu0_INDEX_5] = g_ctsu0_INDEX_5_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_6)
        [g_ctsu0_INDEX_6] = g_ctsu0_INDEX_6_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_7)
        [g_ctsu0_INDEX_7] = g_ctsu0_INDEX_7_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_8)
        [g_ctsu0_INDEX_8] = g_ctsu0_INDEX_8_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_9)
        [g_ctsu0_INDEX_9] = g_ctsu0_INDEX_9_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_10)
        [g_ctsu0_INDEX_10] = g_ctsu0_INDEX_10_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_11)
        [g_ctsu0_INDEX_11] = g_ctsu0_INDEX_11_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_12)
        [g_ctsu0_INDEX_12] = g_ctsu0_INDEX_12_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_13)
        [g_ctsu0_INDEX_13] = g_ctsu0_INDEX_13_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_14)
        [g_ctsu0_INDEX_14] = g_ctsu0_INDEX_14_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_15)
        [g_ctsu0_INDEX_15] = g_ctsu0_INDEX_15_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_16)
        [g_ctsu0_INDEX_16] = g_ctsu0_INDEX_16_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_17)
        [g_ctsu0_INDEX_17] = g_ctsu0_INDEX_17_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_18)
        [g_ctsu0_INDEX_18] = g_ctsu0_INDEX_18_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_19)
        [g_ctsu0_INDEX_19] = g_ctsu0_INDEX_19_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_20)
        [g_ctsu0_INDEX_20] = g_ctsu0_INDEX_20_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_21)
        [g_ctsu0_INDEX_21] = g_ctsu0_INDEX_21_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_22)
        [g_ctsu0_INDEX_22] = g_ctsu0_INDEX_22_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_23)
        [g_ctsu0_INDEX_23] = g_ctsu0_INDEX_23_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_24)
        [g_ctsu0_INDEX_24] = g_ctsu0_INDEX_24_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_25)
        [g_ctsu0_INDEX_25] = g_ctsu0_INDEX_25_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_26)
        [g_ctsu0_INDEX_26] = g_ctsu0_INDEX_26_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_27)
        [g_ctsu0_INDEX_27] = g_ctsu0_INDEX_27_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_28)
        [g_ctsu0_INDEX_28] = g_ctsu0_INDEX_28_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_29)
        [g_ctsu0_INDEX_29] = g_ctsu0_INDEX_29_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_30)
        [g_ctsu0_INDEX_30] = g_ctsu0_INDEX_30_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_31)
        [g_ctsu0_INDEX_31] = g_ctsu0_INDEX_31_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_32)
        [g_ctsu0_INDEX_32] = g_ctsu0_INDEX_32_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_33)
        [g_ctsu0_INDEX_33] = g_ctsu0_INDEX_33_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_34)
        [g_ctsu0_INDEX_34] = g_ctsu0_INDEX_34_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_35)
        [g_ctsu0_INDEX_35] = g_ctsu0_INDEX_35_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_36)
        [g_ctsu0_INDEX_36] = g_ctsu0_INDEX_36_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_37)
        [g_ctsu0_INDEX_37] = g_ctsu0_INDEX_37_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_38)
        [g_ctsu0_INDEX_38] = g_ctsu0_INDEX_38_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_39)
        [g_ctsu0_INDEX_39] = g_ctsu0_INDEX_39_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_40)
        [g_ctsu0_INDEX_40] = g_ctsu0_INDEX_40_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_41)
        [g_ctsu0_INDEX_41] = g_ctsu0_INDEX_41_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_42)
        [g_ctsu0_INDEX_42] = g_ctsu0_INDEX_42_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_43)
        [g_ctsu0_INDEX_43] = g_ctsu0_INDEX_43_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_44)
        [g_ctsu0_INDEX_44] = g_ctsu0_INDEX_44_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_45)
        [g_ctsu0_INDEX_45] = g_ctsu0_INDEX_45_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_46)
        [g_ctsu0_INDEX_46] = g_ctsu0_INDEX_46_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_47)
        [g_ctsu0_INDEX_47] = g_ctsu0_INDEX_47_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_48)
        [g_ctsu0_INDEX_48] = g_ctsu0_INDEX_48_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_49)
        [g_ctsu0_INDEX_49] = g_ctsu0_INDEX_49_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_50)
        [g_ctsu0_INDEX_50] = g_ctsu0_INDEX_50_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_51)
        [g_ctsu0_INDEX_51] = g_ctsu0_INDEX_51_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_52)
        [g_ctsu0_INDEX_52] = g_ctsu0_INDEX_52_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_53)
        [g_ctsu0_INDEX_53] = g_ctsu0_INDEX_53_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_54)
        [g_ctsu0_INDEX_54] = g_ctsu0_INDEX_54_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_55)
        [g_ctsu0_INDEX_55] = g_ctsu0_INDEX_55_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_56)
        [g_ctsu0_INDEX_56] = g_ctsu0_INDEX_56_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_57)
        [g_ctsu0_INDEX_57] = g_ctsu0_INDEX_57_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_58)
        [g_ctsu0_INDEX_58] = g_ctsu0_INDEX_58_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_59)
        [g_ctsu0_INDEX_59] = g_ctsu0_INDEX_59_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_60)
        [g_ctsu0_INDEX_60] = g_ctsu0_INDEX_60_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_61)
        [g_ctsu0_INDEX_61] = g_ctsu0_INDEX_61_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_62)
        [g_ctsu0_INDEX_62] = g_ctsu0_INDEX_62_TOUCH_PARAMS,
#endif
#if defined (g_ctsu0_INDEX_63)
        [g_ctsu0_INDEX_63] = g_ctsu0_INDEX_63_TOUCH_PARAMS,
#endif
    };

uint64_t g_touch0_on_g_ctsu_binary = 0;

uint8_t g_touch0_on_g_ctsu_buffer[MUTUAL0_NUM * sizeof(sensor_info_t)];

touch_cfg_t const g_touch0_on_g_ctsu_cfg =
{ .p_ctsu = &g_ctsu0, .p_common = &g_touch0_on_g_ctsu_common_parameter, .p_sensor =
          &g_touch0_on_g_ctsu_sensor_parameter[0],
  .p_binary_result = (uint8_t*) &g_touch0_on_g_ctsu_binary, .p_callback = NULL, .num_ignored = 0, .p_ignored = NULL,
  .buffer =
  { .p_start = &g_touch0_on_g_ctsu_buffer[0], .size = sizeof(g_touch0_on_g_ctsu_buffer), },
  .custom =
  { .p_filter = NULL, .p_touch_detect = NULL, .p_filter_instance = NULL, .num_filter_instances = 0, }, };

touch_instance_ctrl_t g_touch0_on_g_ctsu_ctrl;

touch_instance_t const g_touch0_on_g_ctsu =
{ .p_ctrl = &g_touch0_on_g_ctsu_ctrl, .p_cfg = &g_touch0_on_g_ctsu_cfg, .p_api = &g_touch_on_touch, };

#endif /* (DATA_SOURCE == DATA_SOURCE_SSPCONFIG) */
#if (SF_CTSU_COMM_CFG_CONNECTION==2)
extern uart_instance_t const g_sf_comms0;
#else
extern sf_comms_instance_t const g_sf_comms0;
#endif

sf_ctsu_comm_instance_ctrl_t g_sf_ctsu_comm0_ctrl;

sf_ctsu_comm_cfg_t g_sf_ctsu_comm0_cfg =
{ .index = 0,
#if (SF_CTSU_COMM_CFG_CONNECTION > 0)
  .p_comms = &g_sf_comms0,
#else
  .p_comms = NULL,
#endif
  .p_ctsu = &g_ctsu0,
#if (SF_CTSU_COMM_CFG_MODE==SF_CTSU_COMM_CFG_MODE_MONITOR)
  .p_touch = &g_touch0_on_g_ctsu,
#elif(SF_CTSU_COMM_CFG_MODE==SF_CTSU_COMM_CFG_MODE_COMM)
        .p_touch = NULL,
#endif
    };

sf_ctsu_comm_instance_t const g_sf_ctsu_comm0 =
{ .p_ctrl = &g_sf_ctsu_comm0_ctrl, .p_api = &g_ctsu_comm_api, .p_cfg = &g_sf_ctsu_comm0_cfg, };
#if (DATA_SOURCE == DATA_SOURCE_SSPCONFIG)
touch_button_instance_ctrl_t Button_RX02_on_g_touch0_on_g_ctsu_ctrl;
touch_button_cfg_t Button_RX02_on_g_touch0_on_g_ctsu_cfg =
{ .button.tx = CTSU_SENSOR_2_TS_TX, .button.rx = CTSU_SENSOR_2_TS_RX, .p_touch = &g_touch0_on_g_ctsu,
  .enable.bit.reserved = 0, .enable.bit.hold = false, .enable.bit.press = true, .enable.bit.release = true, .debounce =
          1, //SYNERGY_NOT_DEFINED,
  .hold_max = 65535, .p_callback = touch_button_common_callback, };
touch_button_instance_t Button_RX02_on_g_touch0_on_g_ctsu =
{ .p_ctrl = &Button_RX02_on_g_touch0_on_g_ctsu_ctrl, .p_cfg = &Button_RX02_on_g_touch0_on_g_ctsu_cfg, .p_api =
          &g_touch_button_on_touch_button, };
#endif /* (DATA_SOURCE == DATA_SOURCE_SSPCONFIG) */
#if (DATA_SOURCE == DATA_SOURCE_SSPCONFIG)
touch_button_instance_ctrl_t Button_RX01_on_g_touch0_on_g_ctsu_ctrl;
touch_button_cfg_t Button_RX01_on_g_touch0_on_g_ctsu_cfg =
{ .button.tx = CTSU_SENSOR_1_TS_TX, .button.rx = CTSU_SENSOR_1_TS_RX, .p_touch = &g_touch0_on_g_ctsu,
  .enable.bit.reserved = 0, .enable.bit.hold = false, .enable.bit.press = true, .enable.bit.release = true, .debounce =
          1, //SYNERGY_NOT_DEFINED,
  .hold_max = 65535, .p_callback = touch_button_common_callback, };
touch_button_instance_t Button_RX01_on_g_touch0_on_g_ctsu =
{ .p_ctrl = &Button_RX01_on_g_touch0_on_g_ctsu_ctrl, .p_cfg = &Button_RX01_on_g_touch0_on_g_ctsu_cfg, .p_api =
          &g_touch_button_on_touch_button, };
#endif /* (DATA_SOURCE == DATA_SOURCE_SSPCONFIG) */
#if (DATA_SOURCE == DATA_SOURCE_SSPCONFIG)
touch_button_instance_ctrl_t Button_RX03_on_g_touch0_on_g_ctsu_ctrl;
touch_button_cfg_t Button_RX03_on_g_touch0_on_g_ctsu_cfg =
{ .button.tx = CTSU_SENSOR_3_TS_TX, .button.rx = CTSU_SENSOR_3_TS_RX, .p_touch = &g_touch0_on_g_ctsu,
  .enable.bit.reserved = 0, .enable.bit.hold = false, .enable.bit.press = true, .enable.bit.release = true, .debounce =
          1, //SYNERGY_NOT_DEFINED,
  .hold_max = 65535, .p_callback = touch_button_common_callback, };
touch_button_instance_t Button_RX03_on_g_touch0_on_g_ctsu =
{ .p_ctrl = &Button_RX03_on_g_touch0_on_g_ctsu_ctrl, .p_cfg = &Button_RX03_on_g_touch0_on_g_ctsu_cfg, .p_api =
          &g_touch_button_on_touch_button, };
#endif /* (DATA_SOURCE == DATA_SOURCE_SSPCONFIG) */
#if (DATA_SOURCE == DATA_SOURCE_SSPCONFIG)
touch_button_instance_ctrl_t Button_RX00_on_g_touch0_on_g_ctsu_ctrl;
touch_button_cfg_t Button_RX00_on_g_touch0_on_g_ctsu_cfg =
{ .button.tx = CTSU_SENSOR_0_TS_TX, .button.rx = CTSU_SENSOR_0_TS_RX, .p_touch = &g_touch0_on_g_ctsu,
  .enable.bit.reserved = 0, .enable.bit.hold = false, .enable.bit.press = true, .enable.bit.release = true, .debounce =
          1, //SYNERGY_NOT_DEFINED,
  .hold_max = 65535, .p_callback = touch_button_common_callback, };
touch_button_instance_t Button_RX00_on_g_touch0_on_g_ctsu =
{ .p_ctrl = &Button_RX00_on_g_touch0_on_g_ctsu_ctrl, .p_cfg = &Button_RX00_on_g_touch0_on_g_ctsu_cfg, .p_api =
          &g_touch_button_on_touch_button, };
#endif /* (DATA_SOURCE == DATA_SOURCE_SSPCONFIG) */
/* Instance structure to use this module. */
const fmi_instance_t g_fmi =
{ .p_api = &g_fmi_on_fmi };
const cgc_instance_t g_cgc =
{ .p_api = &g_cgc_on_cgc, .p_cfg = NULL };
const ioport_instance_t g_ioport =
{ .p_api = &g_ioport_on_ioport, .p_cfg = NULL };
const elc_instance_t g_elc =
{ .p_api = &g_elc_on_elc, .p_cfg = NULL };

void g_common_init(void)
{

    /** Call initialization function if user has selected to do so. */
#if (1)
    ux_common_init0 ();
#endif
    /** Call initialization function if user has selected to do so. */
#if (1)
    ux_device_init0 ();
#endif
    /** Call initialization function if user has selected to do so. */
#if (1)
    ux_device_class_cdc_acm_init0 ();
#endif

#if (BUTTON_CFG_OPEN_ON_INIT==1)
    {
        /* Open the Button_RX02_on_g_touch0_on_g_ctsu button Instance */
        touch_button_err_t err = Button_RX02_on_g_touch0_on_g_ctsu.p_api->open(Button_RX02_on_g_touch0_on_g_ctsu.p_ctrl, Button_RX02_on_g_touch0_on_g_ctsu.p_cfg);

        /* Wait here if open fails */
        while(TOUCH_BUTTON_SUCCESS!=err);
    }
#endif /* (BUTTON_CFG_OPEN_ON_INIT==1) */
#if (BUTTON_CFG_OPEN_ON_INIT==1)
    {
        /* Open the Button_RX01_on_g_touch0_on_g_ctsu button Instance */
        touch_button_err_t err = Button_RX01_on_g_touch0_on_g_ctsu.p_api->open(Button_RX01_on_g_touch0_on_g_ctsu.p_ctrl, Button_RX01_on_g_touch0_on_g_ctsu.p_cfg);

        /* Wait here if open fails */
        while(TOUCH_BUTTON_SUCCESS!=err);
    }
#endif /* (BUTTON_CFG_OPEN_ON_INIT==1) */
#if (BUTTON_CFG_OPEN_ON_INIT==1)
    {
        /* Open the Button_RX03_on_g_touch0_on_g_ctsu button Instance */
        touch_button_err_t err = Button_RX03_on_g_touch0_on_g_ctsu.p_api->open(Button_RX03_on_g_touch0_on_g_ctsu.p_ctrl, Button_RX03_on_g_touch0_on_g_ctsu.p_cfg);

        /* Wait here if open fails */
        while(TOUCH_BUTTON_SUCCESS!=err);
    }
#endif /* (BUTTON_CFG_OPEN_ON_INIT==1) */
#if (BUTTON_CFG_OPEN_ON_INIT==1)
    {
        /* Open the Button_RX00_on_g_touch0_on_g_ctsu button Instance */
        touch_button_err_t err = Button_RX00_on_g_touch0_on_g_ctsu.p_api->open(Button_RX00_on_g_touch0_on_g_ctsu.p_ctrl, Button_RX00_on_g_touch0_on_g_ctsu.p_cfg);

        /* Wait here if open fails */
        while(TOUCH_BUTTON_SUCCESS!=err);
    }
#endif /* (BUTTON_CFG_OPEN_ON_INIT==1) */
}
