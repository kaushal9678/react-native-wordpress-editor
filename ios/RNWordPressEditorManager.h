/*
 * This file is part of the react-native-wordpress-editor project.
 *
 * Copyright (C) 2016 Wix.com Ltd
 *
 * react-native-wordpress-editor is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 2 of the License.
 *
 * react-native-wordpress-editor is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with react-native-wordpress-editor. If not, see <http://www.gnu.org/licenses/>
 */

#import <Foundation/Foundation.h>
#import "RCTBridgeModule.h"

/*
 RNWordPressEditorManager
 
 Singleton RN native manager accessible via JavaScript and controls all communications with the native editor
 */

@interface RNWordPressEditorManager : NSObject <RCTBridgeModule>
@end
