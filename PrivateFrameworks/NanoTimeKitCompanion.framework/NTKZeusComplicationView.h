/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusComplicationView : UIView <NTKComplicationDisplay, NTKZeusLowerComplicationDisplay> {
    UIView * _highlightView;
    BOOL  _highlighted;
    unsigned int  _style;
    <NTKComplicationDisplayObserver> * displayObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (nonatomic) unsigned int style;
@property (readonly) Class superclass;

+ (id)viewForComplicationType:(unsigned int)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrame;
- (id)displayObserver;
- (id)init;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (void)setDisplayObserver:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setStyle:(unsigned int)arg1;
- (unsigned int)style;

@end
