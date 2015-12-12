##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=JuegoAsteroides
ConfigurationName      :=Debug
WorkspacePath          := "/Users/josilvam/OpenSourceProjects/JuegoAsteroides"
ProjectPath            := "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=josilvam
Date                   :=04/12/2015
CodeLitePath           :="/Users/josilvam/Library/Application Support/codelite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/libJuegoAsteroides.dylib
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="JuegoAsteroides.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)./ $(IncludeSwitch)/usr/local/lib $(IncludeSwitch)/usr/local/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)allegro $(LibrarySwitch)allegro_acodec $(LibrarySwitch)allegro_audio $(LibrarySwitch)allegro_color $(LibrarySwitch)allegro_dialog $(LibrarySwitch)allegro_font $(LibrarySwitch)allegro_image $(LibrarySwitch)allegro_memfile $(LibrarySwitch)allegro_physfs $(LibrarySwitch)allegro_primitives $(LibrarySwitch)allegro_ttf $(LibrarySwitch)allegro_main 
ArLibs                 :=  "liballegro.dylib" "liballegro_acodec.dylib" "liballegro_audio.dylib" "liballegro_color.dylib" "liballegro_dialog.dylib" "liballegro_font.dylib" "liballegro_image.dylib" "liballegro_memfile.dylib" "liballegro_physfs.dylib" "liballegro_primitives.dylib" "liballegro_ttf.dylib" "liballegro_main.dylib" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/usr/local/lib 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS := -std=c++14 -std=c++11 -g -O0 -std=c++14 -std=c++11 $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/Actores_Asteroide.cpp$(ObjectSuffix) $(IntermediateDirectory)/Actores_NaveEspacial.cpp$(ObjectSuffix) $(IntermediateDirectory)/Actores_RayoLaser.cpp$(ObjectSuffix) $(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(ObjectSuffix) $(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(ObjectSuffix) $(IntermediateDirectory)/Base_AllegroAPI.cpp$(ObjectSuffix) $(IntermediateDirectory)/Base_EventosAllegro.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(SharedObjectLinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)
	@$(MakeDirCommand) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/.build-debug"
	@echo rebuilt > "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/.build-debug/JuegoAsteroides"

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Actores_Asteroide.cpp$(ObjectSuffix): src/Actores/Asteroide.cpp $(IntermediateDirectory)/Actores_Asteroide.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/Actores/Asteroide.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Actores_Asteroide.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Actores_Asteroide.cpp$(DependSuffix): src/Actores/Asteroide.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Actores_Asteroide.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Actores_Asteroide.cpp$(DependSuffix) -MM "src/Actores/Asteroide.cpp"

$(IntermediateDirectory)/Actores_Asteroide.cpp$(PreprocessSuffix): src/Actores/Asteroide.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Actores_Asteroide.cpp$(PreprocessSuffix) "src/Actores/Asteroide.cpp"

$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(ObjectSuffix): src/Actores/NaveEspacial.cpp $(IntermediateDirectory)/Actores_NaveEspacial.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/Actores/NaveEspacial.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(DependSuffix): src/Actores/NaveEspacial.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(DependSuffix) -MM "src/Actores/NaveEspacial.cpp"

$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(PreprocessSuffix): src/Actores/NaveEspacial.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Actores_NaveEspacial.cpp$(PreprocessSuffix) "src/Actores/NaveEspacial.cpp"

$(IntermediateDirectory)/Actores_RayoLaser.cpp$(ObjectSuffix): src/Actores/RayoLaser.cpp $(IntermediateDirectory)/Actores_RayoLaser.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/Actores/RayoLaser.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Actores_RayoLaser.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Actores_RayoLaser.cpp$(DependSuffix): src/Actores/RayoLaser.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Actores_RayoLaser.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Actores_RayoLaser.cpp$(DependSuffix) -MM "src/Actores/RayoLaser.cpp"

$(IntermediateDirectory)/Actores_RayoLaser.cpp$(PreprocessSuffix): src/Actores/RayoLaser.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Actores_RayoLaser.cpp$(PreprocessSuffix) "src/Actores/RayoLaser.cpp"

$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(ObjectSuffix): src/Actores/FabricaObjetoGrafica.cpp $(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/Actores/FabricaObjetoGrafica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(DependSuffix): src/Actores/FabricaObjetoGrafica.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(DependSuffix) -MM "src/Actores/FabricaObjetoGrafica.cpp"

$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(PreprocessSuffix): src/Actores/FabricaObjetoGrafica.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(PreprocessSuffix) "src/Actores/FabricaObjetoGrafica.cpp"

$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(ObjectSuffix): src/Base/JuegoAsteroides.cpp $(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/Base/JuegoAsteroides.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(DependSuffix): src/Base/JuegoAsteroides.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(DependSuffix) -MM "src/Base/JuegoAsteroides.cpp"

$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(PreprocessSuffix): src/Base/JuegoAsteroides.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(PreprocessSuffix) "src/Base/JuegoAsteroides.cpp"

$(IntermediateDirectory)/Base_AllegroAPI.cpp$(ObjectSuffix): src/Base/AllegroAPI.cpp $(IntermediateDirectory)/Base_AllegroAPI.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/Base/AllegroAPI.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Base_AllegroAPI.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Base_AllegroAPI.cpp$(DependSuffix): src/Base/AllegroAPI.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Base_AllegroAPI.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Base_AllegroAPI.cpp$(DependSuffix) -MM "src/Base/AllegroAPI.cpp"

$(IntermediateDirectory)/Base_AllegroAPI.cpp$(PreprocessSuffix): src/Base/AllegroAPI.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Base_AllegroAPI.cpp$(PreprocessSuffix) "src/Base/AllegroAPI.cpp"

$(IntermediateDirectory)/Base_EventosAllegro.cpp$(ObjectSuffix): src/Base/EventosAllegro.cpp $(IntermediateDirectory)/Base_EventosAllegro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/Base/EventosAllegro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Base_EventosAllegro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Base_EventosAllegro.cpp$(DependSuffix): src/Base/EventosAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Base_EventosAllegro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Base_EventosAllegro.cpp$(DependSuffix) -MM "src/Base/EventosAllegro.cpp"

$(IntermediateDirectory)/Base_EventosAllegro.cpp$(PreprocessSuffix): src/Base/EventosAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Base_EventosAllegro.cpp$(PreprocessSuffix) "src/Base/EventosAllegro.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


