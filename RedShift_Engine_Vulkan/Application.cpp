// User Includes 


/* Vulkan Includes */
#include <vulkan/vulkan.h>

/* System Includes */
#if defined(_WIN32) || defined(_WIN64)
#include <Windows.h>
#endif

int main()
{
	if (VK_ERROR_DEVICE_LOST != -4)
	{
		return -1;
	}
	else
	{

		return 0;
	}
}