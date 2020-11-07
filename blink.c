#include <metal/machine.h>
#include <metal/led.h>
#define DELAY for(int delay = 0; delay < 1000000; delay++);
int main() {
    struct metal_led *led0_blue;
    // initial cpu
    struct metal_cpu *cpu = metal_cpu_get(0);
    struct metal_interrupt *cpu_int = metal_cpu_interrupt_controller(cpu);
    metal_interrupt_init(cpu_int);
    // set led pin
	led0_blue = metal_led_get_rgb("LD0", "blue");
    // enable led
	metal_led_enable(led0_blue);
    // off led
	metal_led_on(led0_blue);
    while(1)
    {
        DELAY;
		metal_led_off(led0_blue);
        DELAY;
        metal_led_on(led0_blue);
    }
    return 0;
}
