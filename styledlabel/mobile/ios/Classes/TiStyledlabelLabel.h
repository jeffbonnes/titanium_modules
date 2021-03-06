/**
 * Ti.StyledLabel Module
 * Copyright (c) 2010-2013 by Appcelerator, Inc. All Rights Reserved.
 * Please see the LICENSE included with this distribution for details.
 */
 
#import "TiUIView.h"

@interface TiStyledlabelLabel : TiUIView<UIWebViewDelegate> {
    UIWebView* _web;
    NSString* _html;
    float _contentHeight;
    BOOL _webViewDidLoad;
    NSString* _backgroundColorString;
}

-(void)setHtml_:(NSString *)html;
-(void)setBackgroundColor_:(id)value;
-(void)createView;
-(float)currentContentHeight;

@end
