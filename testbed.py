#! usr/bin/env python
try:
    import RPI.GPIO as GPIO

except ImportError:
    print('\nusing simulated GPIO \n')
    from sim_RPI import *
# from gpiozero import Motor
import time

p = GPIO.PWM(1, 1000)

p.start(25)
p.ChangeDutyCycle(100)

GPIO.setmode(GPIO.BCM)

class Testbed():

    def __init__(self):
        self.cone_pul = 
        self.cone_dir = 
        self.reel_pul =
        self.reel_dir = 

        self.table_pwm = 
        self.table_in1 = 
        self.table_in2 = 
        self.table_en =

        self.limit_pin = 
        GPIO.setup(self.limit_pin, GPIO.IN)
        self.contact_pin = 
        GPIO.setup(self.contact_pin, GPIO.IN)
        self.table_hall_pin = 
        GPIO.setup(self.table_hall_pin, GPIO.IN)

    def main(self):
        pass

    def raise_cone(self):

        while not GPIO.input(self.contact_pin):
            pass
            # power motor

    def lower_cone(self):
        time_delta = 0
        past_time = time.perf_counter()
        while time_delta < 0.1:
            current_time = time.perf_counter()
            time_delta = current_time - past_time

    def reel_in_spool(self):
        pass

    def reel_out_spool(self):
        pass



