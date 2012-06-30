/**
 * Copyright 2012, Norio Nomura
 * EasySIMBL is released under the GNU General Public License v2.
 * http://www.opensource.org/licenses/gpl-2.0.php
 */

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (nonatomic) NSString *loginItemBundleIdentifier;

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSButton *useSIMBL;
- (IBAction)toggleUseSIMBL:(id)sender;

@end
