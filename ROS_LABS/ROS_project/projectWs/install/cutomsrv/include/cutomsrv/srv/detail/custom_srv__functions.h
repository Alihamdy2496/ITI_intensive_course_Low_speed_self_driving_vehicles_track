// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cutomsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__FUNCTIONS_H_
#define CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cutomsrv/msg/rosidl_generator_c__visibility_control.h"

#include "cutomsrv/srv/detail/custom_srv__struct.h"

/// Initialize srv/CustomSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cutomsrv__srv__CustomSrv_Request
 * )) before or use
 * cutomsrv__srv__CustomSrv_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
bool
cutomsrv__srv__CustomSrv_Request__init(cutomsrv__srv__CustomSrv_Request * msg);

/// Finalize srv/CustomSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
void
cutomsrv__srv__CustomSrv_Request__fini(cutomsrv__srv__CustomSrv_Request * msg);

/// Create srv/CustomSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cutomsrv__srv__CustomSrv_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
cutomsrv__srv__CustomSrv_Request *
cutomsrv__srv__CustomSrv_Request__create();

/// Destroy srv/CustomSrv message.
/**
 * It calls
 * cutomsrv__srv__CustomSrv_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
void
cutomsrv__srv__CustomSrv_Request__destroy(cutomsrv__srv__CustomSrv_Request * msg);


/// Initialize array of srv/CustomSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * cutomsrv__srv__CustomSrv_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
bool
cutomsrv__srv__CustomSrv_Request__Sequence__init(cutomsrv__srv__CustomSrv_Request__Sequence * array, size_t size);

/// Finalize array of srv/CustomSrv messages.
/**
 * It calls
 * cutomsrv__srv__CustomSrv_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
void
cutomsrv__srv__CustomSrv_Request__Sequence__fini(cutomsrv__srv__CustomSrv_Request__Sequence * array);

/// Create array of srv/CustomSrv messages.
/**
 * It allocates the memory for the array and calls
 * cutomsrv__srv__CustomSrv_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
cutomsrv__srv__CustomSrv_Request__Sequence *
cutomsrv__srv__CustomSrv_Request__Sequence__create(size_t size);

/// Destroy array of srv/CustomSrv messages.
/**
 * It calls
 * cutomsrv__srv__CustomSrv_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
void
cutomsrv__srv__CustomSrv_Request__Sequence__destroy(cutomsrv__srv__CustomSrv_Request__Sequence * array);

/// Initialize srv/CustomSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cutomsrv__srv__CustomSrv_Response
 * )) before or use
 * cutomsrv__srv__CustomSrv_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
bool
cutomsrv__srv__CustomSrv_Response__init(cutomsrv__srv__CustomSrv_Response * msg);

/// Finalize srv/CustomSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
void
cutomsrv__srv__CustomSrv_Response__fini(cutomsrv__srv__CustomSrv_Response * msg);

/// Create srv/CustomSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cutomsrv__srv__CustomSrv_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
cutomsrv__srv__CustomSrv_Response *
cutomsrv__srv__CustomSrv_Response__create();

/// Destroy srv/CustomSrv message.
/**
 * It calls
 * cutomsrv__srv__CustomSrv_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
void
cutomsrv__srv__CustomSrv_Response__destroy(cutomsrv__srv__CustomSrv_Response * msg);


/// Initialize array of srv/CustomSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * cutomsrv__srv__CustomSrv_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
bool
cutomsrv__srv__CustomSrv_Response__Sequence__init(cutomsrv__srv__CustomSrv_Response__Sequence * array, size_t size);

/// Finalize array of srv/CustomSrv messages.
/**
 * It calls
 * cutomsrv__srv__CustomSrv_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
void
cutomsrv__srv__CustomSrv_Response__Sequence__fini(cutomsrv__srv__CustomSrv_Response__Sequence * array);

/// Create array of srv/CustomSrv messages.
/**
 * It allocates the memory for the array and calls
 * cutomsrv__srv__CustomSrv_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
cutomsrv__srv__CustomSrv_Response__Sequence *
cutomsrv__srv__CustomSrv_Response__Sequence__create(size_t size);

/// Destroy array of srv/CustomSrv messages.
/**
 * It calls
 * cutomsrv__srv__CustomSrv_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cutomsrv
void
cutomsrv__srv__CustomSrv_Response__Sequence__destroy(cutomsrv__srv__CustomSrv_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__FUNCTIONS_H_
