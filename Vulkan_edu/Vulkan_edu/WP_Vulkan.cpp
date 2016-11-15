#include "WP_Vulkan.h"


WP_Vulkan::WP_Vulkan()
{
	pCreateInfo = new VkApplicationInfo();
	pInstCrtInfo = new VkInstanceCreateInfo();
	pInstance = new VkInstance();
}

WP_Vulkan::~WP_Vulkan()
{
}

void WP_Vulkan::initStructs()
{
	pCreateInfo->apiVersion = VK_MAKE_VERSION(1, 0, 0);
	pCreateInfo->applicationVersion = VK_MAKE_VERSION(1, 0, 0);
	pCreateInfo->engineVersion = VK_API_VERSION_1_0;
	pCreateInfo->pApplicationName = "My learning the Vulkan";
	pCreateInfo->pEngineName = "Tutorial engine";
	pCreateInfo->pNext = nullptr;
	pCreateInfo->sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	
	pInstCrtInfo->enabledExtensionCount = 0;
	pInstCrtInfo->enabledLayerCount = 0;
	pInstCrtInfo->flags = 0;
	pInstCrtInfo->pApplicationInfo = this->pCreateInfo;
	pInstCrtInfo->pNext = nullptr;
	pInstCrtInfo->ppEnabledExtensionNames = nullptr;
	pInstCrtInfo->ppEnabledLayerNames = nullptr;
	pInstCrtInfo->sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;

	if (vkCreateInstance(pInstCrtInfo, nullptr, pInstance) == VK_SUCCESS)
		std::cout << "Instance is created" << std::endl;
	else
		std::cout << "Mistakes in create -> Instance" << std::endl;
}