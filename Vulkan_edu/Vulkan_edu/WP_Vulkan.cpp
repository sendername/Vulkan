#include "WP_Vulkan.h"



WP_Vulkan::WP_Vulkan()
{
	this->pAppInfo = new VkApplicationInfo();
	this->pInstCrtInfo = new VkInstanceCreateInfo();
}

WP_Vulkan::~WP_Vulkan()
{
}

void WP_Vulkan::initStructs()
{
	pAppInfo->apiVersion = VK_MAKE_VERSION(1, 0, 0);
	pAppInfo->applicationVersion = VK_MAKE_VERSION(1, 0, 0);
	pAppInfo->engineVersion = VK_API_VERSION_1_0;
	pAppInfo->pApplicationName = "My learning the Vulkan";
	pAppInfo->pEngineName = "Tutorial engine";
	pAppInfo->pNext = nullptr;
	pAppInfo->sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	
	pInstCrtInfo->enabledExtensionCount = 0;
	pInstCrtInfo->enabledLayerCount = 0;
	pInstCrtInfo->flags = 0;
	pInstCrtInfo->pApplicationInfo = this->pAppInfo;
	pInstCrtInfo->pNext = nullptr;
	pInstCrtInfo->ppEnabledExtensionNames = nullptr;
	pInstCrtInfo->ppEnabledLayerNames = nullptr;
	pInstCrtInfo->sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
}