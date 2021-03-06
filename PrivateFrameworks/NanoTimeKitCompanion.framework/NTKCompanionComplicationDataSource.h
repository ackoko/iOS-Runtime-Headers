/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionComplicationDataSource : NTKComplicationDataSource {
    CLKComplicationTemplate * _complicationTemplate;
}

+ (BOOL)acceptsComplicationType:(unsigned int)arg1 withFamily:(int)arg2;

- (void).cxx_destruct;
- (id)_alarmTemplate;
- (id)_batteryTemplate;
- (id)_breathingTemplate;
- (id)_dateTemplate;
- (void)_localeDidChange:(id)arg1;
- (id)_moonPhaseTemplate;
- (id)_musicTemplate;
- (id)_nextEventTemplate;
- (id)_reminderTemplate;
- (id)_stocksTemplate;
- (id)_stopwatchTemplate;
- (id)_sunriseTemplate;
- (id)_temperatureStringForDegreesFahrenheit:(int)arg1 convertToCelsius:(BOOL)arg2;
- (id)_timerTemplate;
- (id)_weatherConditionsTemplate;
- (id)_weatherTemplate;
- (id)_wellnessTemplate;
- (id)_workoutTemplate;
- (id)_worldClockTemplate;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(int)arg2;

@end
