//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#import <Foundation/Foundation.h>

int auth (NSString *command, NSMutableArray *args, NSPipe *outputBuf);
int setuid_file (NSString *binaryPath);

