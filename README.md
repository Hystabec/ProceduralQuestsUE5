# ProceduralQuestsUE5

### Required Unreal Engine 5.4.4

This is a procedural quest generator build as the artifact for my university 3rd year honours project.

## How to use
While in the Unreal Engine editor:  
Open the `right-click menu` while hovering a `vector curve` asset (in the `Content Browser`)  
Under the `Scripted Asset Actions` tab  
Select `Procedural Quest Generator`  
In the window that appears, change an variables as necessary, then click OK  
  
The generated quest will be logged into the `Output Log`  
All the objects required for the quest will be spawned into the game scene starting at world (0, 0, 0)  

## Creating a vector curve
`Vector curve` is an asset type used in Unreal Engine.  
While in the `Content Browser`, Open the `right-click menu`  
Search for `Curve` (`Miscellaneous -> Curve`) select it  
then select the `CurveVector` option  

## Plotting the vector curve
The procedural quest generator only reads the `X` and `Y` values, so Z does not need to be plotted  
The graph does not need to be plotted in any specific way, as the engine will prompt the user for all the necessary bounds of the graph when using  

## compilation Errors (Unlikly to occure)
The compiled custom C++ module binaries are included in the GitHub repo  
  
however:  
If manuel compilation of "ProceduralQuests" is required:  
Right Click "ProceduralQuests.uproject" and select "Generate Visual Studio project files" (under show more options - if not show by default).  
Once generated open "ProceduralQuests.sln" and build the solution.  
As long as the build succeeds the project should open.  