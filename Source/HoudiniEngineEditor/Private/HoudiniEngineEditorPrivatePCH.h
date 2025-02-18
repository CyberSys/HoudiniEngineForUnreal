/*
* Copyright (c) <2021> Side Effects Software Inc.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice,
*    this list of conditions and the following disclaimer.
*
* 2. The name of Side Effects Software may not be used to endorse or
*    promote products derived from this software without specific prior
*    written permission.
*
* THIS SOFTWARE IS PROVIDED BY SIDE EFFECTS SOFTWARE "AS IS" AND ANY EXPRESS
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
* NO EVENT SHALL SIDE EFFECTS SOFTWARE BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
* OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

#define HOUDINI_ENGINE_EDITOR

#include "HoudiniEngineRuntimePrivatePCH.h"

#include "Editor.h"
#include "Runtime/Launch/Resources/Version.h"

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION > 0
    #include "Subsystems/EditorAssetSubsystem.h"
#else
    #include "EditorAssetLibrary.h"
#endif

// Details panel desired sizes.
#define HAPI_UNREAL_DESIRED_ROW_VALUE_WIDGET_WIDTH              270
#define HAPI_UNREAL_DESIRED_ROW_FULL_WIDGET_WIDTH               310
#define HAPI_UNREAL_DESIRED_SETTINGS_ROW_VALUE_WIDGET_WIDTH     350
#define HAPI_UNREAL_DESIRED_SETTINGS_ROW_FULL_WIDGET_WIDTH      400

 // URL used for bug reporting.
#define HAPI_UNREAL_BUG_REPORT_URL								TEXT("https://www.sidefx.com/bugs/submit/")
#define HAPI_UNREAL_ONLINE_DOC_URL								TEXT("https://www.sidefx.com/docs/unreal/")
#define HAPI_UNREAL_ONLINE_FORUM_URL							TEXT("https://www.sidefx.com/forum/51/")


// UI Category Names

#define HOUDINI_ENGINE_EDITOR_CATEGORY_MAIN						"HoudiniEngine";
#define HOUDINI_ENGINE_EDITOR_CATEGORY_PDG						"HoudiniPDGAssetLink";
#define HOUDINI_ENGINE_EDITOR_CATEGORY_PARAMS					"HoudiniParameters";
#define HOUDINI_ENGINE_EDITOR_CATEGORY_HANDLES					"HoudiniHandles";
#define HOUDINI_ENGINE_EDITOR_CATEGORY_INPUTS					"HoudiniInputs";
#define HOUDINI_ENGINE_EDITOR_CATEGORY_OUTPUTS					"HoudiniOutputs";

//
// Parameter UI constants
//

// Constants for parameter UI indentation

// Change this constant to change the overall indentation width
#define INDENTATION_UNIT_WIDTH									20.0f
// Do not change this width unless the folder triangle arrow is customized.
#define NON_FOLDER_OFFSET_WIDTH									22.0f


// Houdini parameter UI row margin heights
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_BUTTON												  8.80f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_BUTTONSTRIP											  2.15f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_COLOR												  5.50f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_COLORRAMP											 57.20f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_COLORRAMP_INSTANCE									 12.90f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FILE													  6.90f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FILEDIR												  6.90f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FILEGEO												  6.90f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FILEIMAGE											  6.90f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FLOAT												  6.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FLOAT_VEC3											  7.55f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FLOAT_INSTANCE										 10.40f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FLOATRAMP											 51.70f
#define Houdini_PARAMETER_UI_ROW_MARGIN_HEIGHT_FLOATRAMP_INSTANCE									 12.90f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FOLDER												  2.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FOLDERLIST											  2.05f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT												   0.0f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_GEOMETRY										 62.50f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_GEOMETRY_INSTANCE								 49.45f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_GEOMETRY_INSTANCE_TRANSFORM					 36.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_CURVE											 41.45f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_CURVE_INSTANCE									 68.40f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_ASSET											177.55f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_LANDSCAPE										235.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_LANDSCAPE_MESH									275.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_WORLD											219.35f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_SKELETAL										 18.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_GEOMETRYCOLLECTION										 18.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INT													  6.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INT_VEC3												  7.55f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INT_INSTANCE											 10.40f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INTCHOICE											  7.80f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_LABEL												  4.40f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_MULTIPARM											  6.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_SEPARATOR											  1.95f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_STRING												  6.15f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_STRINGASSETREF										  6.15f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_STRINGCHOICE											  7.80f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_STRING_INSTANCE										 10.30f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_TOGGLE												  5.60f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INVALID				   								   0.0f

#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_BUTTON_MULTIPARMHEADER								  4.55f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_BUTTONSTRIP_MULTIPARMHEADER							  2.45f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_COLOR_MULTIPARMHEADER								  2.15f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_COLORRAMP_MULTIPARMHEADER							 57.20f
#define Houdini_PARAMETER_UI_ROW_MARGIN_HEIGHT_COLORRAMP_INSTANCE_MULTIPARMHEADER					 12.90f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FILE_MULTIPARMHEADER									  2.68f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FILEDIR_MULTIPARMHEADER								  2.68f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FILEGEO_MULTIPARMHEADER								  2.68f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FILEIMAGE_MULTIPARMHEADER							  2.68f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FLOAT_MULTIPARMHEADER								  2.60f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FLOAT_VEC3_MULTIPARMHEADER							  3.75f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FLOAT_INSTANCE_MULTIPARMHEADER						 10.40f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FLOATRAMP_MULTIPARMHEADER							 51.70f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FLOATRAMP_INSTANCE_MULTIPARMHEADER					 12.90f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FOLDER_MULTIPARMHEADER								  1.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_FOLDERLIST_MULTIPARMHEADER							   0.0f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_MULTIPARMHEADER								   0.0f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_GEOMETRY_MULTIPARMHEADER						 58.50f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_GEOMETRY_INSTANCE_MULTIPARMHEADER				 49.45f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_GEOMETRY_INSTANCE_TRANSFORM_MULTIPARMHEADER	 40.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_CURVE_MULTIPARMHEADER							 37.45f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_CURVE_INSTANCE_MULTIPARMHEADER					 68.40f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_ASSET_MULTIPARMHEADER							173.55f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_LANDSCAPE_MULTIPARMHEADER						231.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_LANDSCAPE_MESH_MULTIPARMHEADER					266.95f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_WORLD_MULTIPARMHEADER							215.05f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_SKELETAL_MULTIPARMHEADER						 14.
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INPUT_GEOMETRYCOLLECTION_MULTIPARMHEADER						 14.00f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INT_MULTIPARMHEADER									  2.57f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INT_VEC3_MULTIPARMHEADER								  4.12f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INT_INSTANCE_MULTIPARMHEADER							 10.40f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_INTCHOICE_MULTIPARMHEADER							  4.30f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_LABEL_MULTIPARMHEADER								  0.75f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_MULTIPARM_MULTIPARMHEADER							   0.0f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_SEPARATOR_MULTIPARMHEADER							  1.95f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_STRING_MULTIPARMHEADER								  2.50f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_STRINGASSETREF_MULTIPARMHEADER						  2.50f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_STRINGCHOICE_MULTIPARMHEADER							  4.30f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_STRING_INSTANCE_MULTIPARMHEADER						 10.30f
#define HOUDINI_PARAMETER_UI_ROW_MARGIN_HEIGHT_TOGGLE_MULTIPARMHEADER								  2.30f

// Radio button UI constants
#define HOUDINI_RADIO_BUTTON_CIRCLE_SAMPLES_NUM_OUTER													 18
#define HOUDINI_RADIO_BUTTON_CIRCLE_SAMPLES_NUM_INNER													  8
#define HOUDINI_RADIO_BUTTON_CIRCLE_RADIUS_OUTER													   4.5f
#define HOUDINI_RADIO_BUTTON_CIRCLE_RADIUS_INNER													   1.0f
#define HOUDINI_RADIO_BUTTON_CIRCLE_CENTER_X														   7.0f
#define HOUDINI_RADIO_BUTTON_CIRCLE_CENTER_Y														  13.2f


// Backward compatibility with 5.0
static const ISlateStyle& _GetEditorStyle()
{
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 1
    return FAppStyle::Get();
#else
    return FEditorStyle::Get();	
#endif
};

// Wrapper to manage code compatibility across multiple UE versions
static bool _DoesAssetExist(const FString& AssetPath)
{
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION > 0
    UEditorAssetSubsystem* EditorAssetSubsystem = GEditor->GetEditorSubsystem<UEditorAssetSubsystem>();
    return EditorAssetSubsystem->DoesAssetExist(AssetPath);
#else
    return UEditorAssetLibrary::DoesAssetExist(AssetPath);
#endif
};

// Wrapper to manage code compatibility across multiple UE versions
static const FSlateBrush* _GetBrush(FName PropertyName)
{
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION > 0
    return FAppStyle::GetBrush(PropertyName);
#else
    return FEditorStyle::GetBrush(PropertyName);
#endif
}
