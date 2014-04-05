//
//  MazeScene.h
//  MazeExplorer
//
//  Created by Emily Stansbury on 2/23/14.
//
//
/* MazeScene is a scene which renders the maze and lets the user interact with it.
 * It possess a Maze object which it renders into nodes, a player node that it keeps displayed.
 * This class is responsible for movement of the maze, launching obstacles, and passing information
 * about encountered resources along to the appropriate place.
 */

#import <SpriteKit/SpriteKit.h>
#import "ObstacleScene.h"
#import "ResourceConfirm.h"
#import "Maze.h"
#import "typedef.h"
#import "SimonScene.h"

@protocol MazeSceneDelegate

// This is where the talking methods should go for MazeScene/ResourceScene
// They will be sent to MyScene, which will pass along the information to ResourceScene

//This is the function that MyScene calls.
-(void)increaseResourceCounter;
-(void)useResourceConfirmed; 
-(void)mazeSolved;

@end

@interface MazeScene : SKScene <ObstacleSceneDelegate, ResourceConfirmDelegate>

@property (nonatomic) id <MazeSceneDelegate> delegate;

-(void) obstacleDidFinish;
-(void) obstacleDidFail; 
-(void)increaseResourceCounter;
-(void) addPlayer;
-(void) shiftMaze;
-(id)initWithSize:(CGSize)size String: (NSString *)mazeString andWidth: (int) mazeWidth;
-(void)resourceUsed; 
@end
