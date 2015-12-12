##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=JuegoAsteroidesPruebas
ConfigurationName      :=Debug
WorkspacePath          := "/Users/josilvam/OpenSourceProjects/JuegoAsteroides"
ProjectPath            := "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroidesPruebas"
IntermediateDirectory  :=Debug
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
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="JuegoAsteroidesPruebas.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch)/Users/josilvam/OpenSourceProjects/unittest-cpp/UnitTest++/ $(IncludeSwitch)/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/ $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)UnitTest++ $(LibrarySwitch)JuegoAsteroides $(LibrarySwitch)allegro $(LibrarySwitch)allegro_acodec $(LibrarySwitch)allegro_audio $(LibrarySwitch)allegro_color $(LibrarySwitch)allegro_dialog $(LibrarySwitch)allegro_font $(LibrarySwitch)allegro_image $(LibrarySwitch)allegro_memfile $(LibrarySwitch)allegro_physfs $(LibrarySwitch)allegro_primitives $(LibrarySwitch)allegro_ttf $(LibrarySwitch)allegro_main 
ArLibs                 :=  "libUnitTest++.a" "libJuegoAsteroides.dylib" "liballegro.dylib" "liballegro_acodec.dylib" "liballegro_audio.dylib" "liballegro_color.dylib" "liballegro_dialog.dylib" "liballegro_font.dylib" "liballegro_image.dylib" "liballegro_memfile.dylib" "liballegro_physfs.dylib" "liballegro_primitives.dylib" "liballegro_ttf.dylib" "liballegro_main.dylib" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/Users/josilvam/OpenSourceProjects/unittest-cpp/builds $(LibraryPathSwitch)/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/Debug $(LibraryPathSwitch)/usr/local/lib 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS := -g -std=c++14 -std=c++11 $(Preprocessors)
CFLAGS   := -g $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



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
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d Debug || $(MakeDirCommand) Debug


$(IntermediateDirectory)/.d:
	@test -d Debug || $(MakeDirCommand) Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroidesPruebas/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r Debug/


