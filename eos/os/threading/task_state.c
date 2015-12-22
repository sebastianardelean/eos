#include "stdtypes.h"
#include "errorcode.h"
#include "task_stack.h"
#include "task_manager.h"
#include "task_state.h"


_public s8 task_change_state(s8 task_id,E_Task_State task_state)
{
	if((MAX_TASK_NUMBER<task_id && -1>task_id))
	{
		return -NTID;
	}
	if(OS_DESTROYED==task_state)
	{
		
		return -TSNA;
	}
	enable_protection();
	rs_task_stack[task_id].rub_Task_State=task_state;
	disable_protection();
	return SUCCESS;
	
}