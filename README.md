# ProceduralQuestsUE5

### Required Unreal Engine 5.4.4

This is a procedural quest generator build as the artifact for my university 3rd year honours project.

## How to use
While in the Unreal Engine editor:  
Right click a vector curve asset (in the content browser)  
Under the `Scripted Asset Actions` tab  
Select `Procedural Quest Generator`  
In the window that appears, change an variables as necessary, then click OK  
  
The generated quest will be logged into the `Output Log`  
All the objects required for the quest will be spawned into the game scene starting at world (0, 0, 0)  

## compilation Errors (Unlikly to occure)
The compiled custom C++ module binaries are included in the project
however:
If manuel compilation of "ProceduralQuests" is required:
Right Click "ProceduralQuests.uproject" and select "Generate Visual Studio project files" (under show more options - if not show by default).
Once generated open "ProceduralQuests.sln" and build the solution.
As long as the build succeeds the project should open.