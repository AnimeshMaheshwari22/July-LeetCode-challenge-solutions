'''
In an hour, the hour hand moves 30 degrees and a minute hand moves 360 degrees. Lets take an example of 2:15. The hour hand moves a little forward((1/12*15)*6 degrees) than its position at 2, as the minute hand moves 15*6 = 90 degrees. This is because in the time that minute hand covers 12 slots of the clock, hour hand covers 1 slot. This must also be taken into consideration in addition to the normal angle calculation procedure.  
'''
class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        mn=minutes*6 
        hr=((hour%12)*30)+(1/12*minutes)*6 
        print(mn)
        print(hr)
        if(mn>hr):
            return min(mn-hr,360-(mn-hr))
        else:
            return min(hr-mn,360-(hr-mn))
        