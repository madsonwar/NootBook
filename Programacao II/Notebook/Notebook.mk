##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Notebook
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\celio\git\NoteBook\Programacao II"
ProjectPath            := "C:\Users\celio\git\NoteBook\Programacao II\Notebook"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=celio
Date                   :=23/03/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/TDM-GCC-32/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-32/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="Notebook.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-32/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-32/bin/ar.exe rcu
CXX      := C:/TDM-GCC-32/bin/g++.exe
CC       := C:/TDM-GCC-32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Device.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Computador.cpp$(ObjectSuffix) $(IntermediateDirectory)/Notebook.cpp$(ObjectSuffix) $(IntermediateDirectory)/Smartphone.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/celio/git/NoteBook/Programacao II/Notebook/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Device.cpp$(ObjectSuffix): Device.cpp $(IntermediateDirectory)/Device.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/celio/git/NoteBook/Programacao II/Notebook/Device.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Device.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Device.cpp$(DependSuffix): Device.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Device.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Device.cpp$(DependSuffix) -MM "Device.cpp"

$(IntermediateDirectory)/Device.cpp$(PreprocessSuffix): Device.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Device.cpp$(PreprocessSuffix) "Device.cpp"

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp $(IntermediateDirectory)/Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/celio/git/NoteBook/Programacao II/Notebook/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(DependSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Data.cpp$(DependSuffix) -MM "Data.cpp"

$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix) "Data.cpp"

$(IntermediateDirectory)/Computador.cpp$(ObjectSuffix): Computador.cpp $(IntermediateDirectory)/Computador.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/celio/git/NoteBook/Programacao II/Notebook/Computador.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Computador.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Computador.cpp$(DependSuffix): Computador.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Computador.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Computador.cpp$(DependSuffix) -MM "Computador.cpp"

$(IntermediateDirectory)/Computador.cpp$(PreprocessSuffix): Computador.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Computador.cpp$(PreprocessSuffix) "Computador.cpp"

$(IntermediateDirectory)/Notebook.cpp$(ObjectSuffix): Notebook.cpp $(IntermediateDirectory)/Notebook.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/celio/git/NoteBook/Programacao II/Notebook/Notebook.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Notebook.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Notebook.cpp$(DependSuffix): Notebook.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Notebook.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Notebook.cpp$(DependSuffix) -MM "Notebook.cpp"

$(IntermediateDirectory)/Notebook.cpp$(PreprocessSuffix): Notebook.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Notebook.cpp$(PreprocessSuffix) "Notebook.cpp"

$(IntermediateDirectory)/Smartphone.cpp$(ObjectSuffix): Smartphone.cpp $(IntermediateDirectory)/Smartphone.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/celio/git/NoteBook/Programacao II/Notebook/Smartphone.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Smartphone.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Smartphone.cpp$(DependSuffix): Smartphone.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Smartphone.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Smartphone.cpp$(DependSuffix) -MM "Smartphone.cpp"

$(IntermediateDirectory)/Smartphone.cpp$(PreprocessSuffix): Smartphone.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Smartphone.cpp$(PreprocessSuffix) "Smartphone.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


