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
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)./ $(IncludeSwitch)/usr/local/lib $(IncludeSwitch)/usr/local/include $(IncludeSwitch)/Users/josilvam/Downloads/SFML-2.3.2-osx-clang-universal/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)allegro $(LibrarySwitch)allegro_acodec $(LibrarySwitch)allegro_audio $(LibrarySwitch)allegro_color $(LibrarySwitch)allegro_dialog $(LibrarySwitch)allegro_font $(LibrarySwitch)allegro_image $(LibrarySwitch)allegro_memfile $(LibrarySwitch)allegro_physfs $(LibrarySwitch)allegro_primitives $(LibrarySwitch)allegro_ttf $(LibrarySwitch)allegro_main $(LibrarySwitch)sfml-graphics $(LibrarySwitch)sfml-window $(LibrarySwitch)sfml-system 
ArLibs                 :=  "liballegro.dylib" "liballegro_acodec.dylib" "liballegro_audio.dylib" "liballegro_color.dylib" "liballegro_dialog.dylib" "liballegro_font.dylib" "liballegro_image.dylib" "liballegro_memfile.dylib" "liballegro_physfs.dylib" "liballegro_primitives.dylib" "liballegro_ttf.dylib" "liballegro_main.dylib" "sfml-graphics" "sfml-window" "sfml-system" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/usr/local/lib $(LibraryPathSwitch)/Users/josilvam/Downloads/SFML-2.3.2-osx-clang-universal/lib $(LibraryPathSwitch)/Users/josilvam/Downloads/SFML-2.3.2-osx-clang-universal/Frameworks $(LibraryPathSwitch)/Users/josilvam/Downloads/SFML-2.3.2-osx-clang-universal/extlibs 

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
Objects0=$(IntermediateDirectory)/Actores_Asteroide.cpp$(ObjectSuffix) $(IntermediateDirectory)/Actores_NaveEspacial.cpp$(ObjectSuffix) $(IntermediateDirectory)/Actores_RayoLaser.cpp$(ObjectSuffix) $(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(ObjectSuffix) $(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(ObjectSuffix) $(IntermediateDirectory)/Base_EventosAllegro.cpp$(ObjectSuffix) $(IntermediateDirectory)/Base_CoreLib.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(ObjectSuffix) 



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

$(IntermediateDirectory)/Base_EventosAllegro.cpp$(ObjectSuffix): src/Base/EventosAllegro.cpp $(IntermediateDirectory)/Base_EventosAllegro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/Base/EventosAllegro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Base_EventosAllegro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Base_EventosAllegro.cpp$(DependSuffix): src/Base/EventosAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Base_EventosAllegro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Base_EventosAllegro.cpp$(DependSuffix) -MM "src/Base/EventosAllegro.cpp"

$(IntermediateDirectory)/Base_EventosAllegro.cpp$(PreprocessSuffix): src/Base/EventosAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Base_EventosAllegro.cpp$(PreprocessSuffix) "src/Base/EventosAllegro.cpp"

$(IntermediateDirectory)/Base_CoreLib.cpp$(ObjectSuffix): src/Base/CoreLib.cpp $(IntermediateDirectory)/Base_CoreLib.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/Base/CoreLib.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Base_CoreLib.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Base_CoreLib.cpp$(DependSuffix): src/Base/CoreLib.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Base_CoreLib.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Base_CoreLib.cpp$(DependSuffix) -MM "src/Base/CoreLib.cpp"

$(IntermediateDirectory)/Base_CoreLib.cpp$(PreprocessSuffix): src/Base/CoreLib.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Base_CoreLib.cpp$(PreprocessSuffix) "src/Base/CoreLib.cpp"

$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(ObjectSuffix): src/LibreriaJuego/GraficadorAllegro.cpp $(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/LibreriaJuego/GraficadorAllegro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(DependSuffix): src/LibreriaJuego/GraficadorAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(DependSuffix) -MM "src/LibreriaJuego/GraficadorAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(PreprocessSuffix): src/LibreriaJuego/GraficadorAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(PreprocessSuffix) "src/LibreriaJuego/GraficadorAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(ObjectSuffix): src/LibreriaJuego/PantallaAllegro.cpp $(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/LibreriaJuego/PantallaAllegro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(DependSuffix): src/LibreriaJuego/PantallaAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(DependSuffix) -MM "src/LibreriaJuego/PantallaAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(PreprocessSuffix): src/LibreriaJuego/PantallaAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(PreprocessSuffix) "src/LibreriaJuego/PantallaAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(ObjectSuffix): src/LibreriaJuego/TipografiaAllegro.cpp $(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/LibreriaJuego/TipografiaAllegro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(DependSuffix): src/LibreriaJuego/TipografiaAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(DependSuffix) -MM "src/LibreriaJuego/TipografiaAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(PreprocessSuffix): src/LibreriaJuego/TipografiaAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(PreprocessSuffix) "src/LibreriaJuego/TipografiaAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(ObjectSuffix): src/LibreriaJuegoSFML/GraficadorSFML.cpp $(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/LibreriaJuegoSFML/GraficadorSFML.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(DependSuffix): src/LibreriaJuegoSFML/GraficadorSFML.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(DependSuffix) -MM "src/LibreriaJuegoSFML/GraficadorSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(PreprocessSuffix): src/LibreriaJuegoSFML/GraficadorSFML.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(PreprocessSuffix) "src/LibreriaJuegoSFML/GraficadorSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(ObjectSuffix): src/LibreriaJuegoSFML/PantallaSFML.cpp $(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/LibreriaJuegoSFML/PantallaSFML.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(DependSuffix): src/LibreriaJuegoSFML/PantallaSFML.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(DependSuffix) -MM "src/LibreriaJuegoSFML/PantallaSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(PreprocessSuffix): src/LibreriaJuegoSFML/PantallaSFML.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(PreprocessSuffix) "src/LibreriaJuegoSFML/PantallaSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(ObjectSuffix): src/LibreriaJuegoSFML/TipografiaSFML.cpp $(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/josilvam/OpenSourceProjects/JuegoAsteroides/JuegoAsteroides/src/LibreriaJuegoSFML/TipografiaSFML.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(DependSuffix): src/LibreriaJuegoSFML/TipografiaSFML.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(DependSuffix) -MM "src/LibreriaJuegoSFML/TipografiaSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(PreprocessSuffix): src/LibreriaJuegoSFML/TipografiaSFML.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(PreprocessSuffix) "src/LibreriaJuegoSFML/TipografiaSFML.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


