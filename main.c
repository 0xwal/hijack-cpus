#include <stdio.h>
#include <windows.h>

void infinite() {
	while (1) {
		//printf("Subscribe to 0xWaleed");
	}
}

int main() {
	SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS);

	// in order to get all cpu cores
	SYSTEM_INFO sys_info;
	GetSystemInfo(&sys_info);


	printf("processors count: %d\n", sys_info.dwNumberOfProcessors);


	for (size_t i = 0; i < sys_info.dwNumberOfProcessors - 1; i++) {
		CreateThread(NULL, 0, infinite, NULL, 0, NULL);
	}

	infinite(NULL);
}
