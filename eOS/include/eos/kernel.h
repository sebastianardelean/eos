#ifndef INCLUDE_EOS_KERNEL_H_
#define INCLUDE_EOS_KERNEL_H_
/*
 * ######################################################
 * ##			API Include      					   ##
 * ######################################################
 * */

/*
 * ######################################################
 * ##			Type Definitions					   ##
 * ######################################################
 * */
/*
 * ######################################################
 * ##			Variable Definitions				   ##
 * ######################################################
 * */
/*
 * ######################################################
 * ##			Function Definitions				   ##
 * ######################################################
 * */

_public inline void kernel_DisableSwInterrupt();
_public inline void kernel_EnableSwInterrupt();
_public void kernel_ErrorHook(void);
#endif /*INCLUDE_EOS_KERNEL_H_*/
