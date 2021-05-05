

class GPIO():
    def __init__(self):
        pass

    def setmode(self, a):
        pass

    def setup(self, a, b):
        pass

    def output(self, a, b):
        pass
    
    def input(self, a, b):
        pass

    def cleanup(self):
        pass
    
    def setwarnings(self, flag):
        pass
    
    def LOW(self):
        pass
    
    def HIGH(self):
        pass

    def BCM(self):
        pass

    def IN(self):
        pass

    def OUT(self):
        pass
    
    class PWM():
        def __init__(self, pin, freq):
            pass

        def start(self, pwm_value):
            print(f'pwm value is: {pwm_value}')

        def ChangeDutyCycle(self, pwm_value):
            print(f'new pwm value is: {pwm_value}')