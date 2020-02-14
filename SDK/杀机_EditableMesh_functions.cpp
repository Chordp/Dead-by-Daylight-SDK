// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_EditableMesh_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EditableMesh.EditableMesh.WeldVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>*      VertexIDs                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVertexID               OutNewVertexID                 (Parm, OutParm)
// FunctionAddress:0x00007FF6800979D0              		 offset:f879d0                        

void UEditableMesh::WeldVertices(TArray<struct FVertexID>* VertexIDs, struct FVertexID* OutNewVertexID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.WeldVertices"));

	UEditableMesh_WeldVertices_Params params;
	params.VertexIDs = VertexIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewVertexID != nullptr)
		*OutNewVertexID = params.OutNewVertexID;
}


// Function EditableMesh.EditableMesh.TryToRemoveVertex
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// bool                           bOutWasVertexRemoved           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FEdgeID                 OutNewEdgeID                   (Parm, OutParm)
// FunctionAddress:0x00007FF6800978A0              		 offset:f878a0                        

void UEditableMesh::TryToRemoveVertex(struct FVertexID* VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.TryToRemoveVertex"));

	UEditableMesh_TryToRemoveVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutWasVertexRemoved != nullptr)
		*bOutWasVertexRemoved = params.bOutWasVertexRemoved;
	if (OutNewEdgeID != nullptr)
		*OutNewEdgeID = params.OutNewEdgeID;
}


// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// bool                           bOutWasEdgeRemoved             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPolygonID              OutNewPolygonID                (Parm, OutParm)
// FunctionAddress:0x00007FF680097770              		 offset:f87770                        

void UEditableMesh::TryToRemovePolygonEdge(struct FEdgeID* EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.TryToRemovePolygonEdge"));

	UEditableMesh_TryToRemovePolygonEdge_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutWasEdgeRemoved != nullptr)
		*bOutWasEdgeRemoved = params.bOutWasEdgeRemoved;
	if (OutNewPolygonID != nullptr)
		*OutNewPolygonID = params.OutNewPolygonID;
}


// Function EditableMesh.EditableMesh.TriangulatePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>*     PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPolygonID>      OutNewTrianglePolygons         (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680097650              		 offset:f87650                        

void UEditableMesh::TriangulatePolygons(TArray<struct FPolygonID>* PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.TriangulatePolygons"));

	UEditableMesh_TriangulatePolygons_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewTrianglePolygons != nullptr)
		*OutNewTrianglePolygons = params.OutNewTrianglePolygons;
}


// Function EditableMesh.EditableMesh.TessellatePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>*     PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// ETriangleTessellationMode*     TriangleTessellationMode       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPolygonID>      OutNewPolygonIDs               (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6800974F0              		 offset:f874f0                        

void UEditableMesh::TessellatePolygons(TArray<struct FPolygonID>* PolygonIDs, ETriangleTessellationMode* TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.TessellatePolygons"));

	UEditableMesh_TessellatePolygons_Params params;
	params.PolygonIDs = PolygonIDs;
	params.TriangleTessellationMode = TriangleTessellationMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;
}


// Function EditableMesh.EditableMesh.StartModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMeshModificationType*         MeshModificationType           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EMeshTopologyChange*           MeshTopologyChange             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680097430              		 offset:f87430                        

void UEditableMesh::StartModification(EMeshModificationType* MeshModificationType, EMeshTopologyChange* MeshTopologyChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.StartModification"));

	UEditableMesh_StartModification_Params params;
	params.MeshModificationType = MeshModificationType;
	params.MeshTopologyChange = MeshTopologyChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SplitPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonToSplit>* PolygonsToSplit                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6800972F0              		 offset:f872f0                        

void UEditableMesh::SplitPolygons(TArray<struct FPolygonToSplit>* PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SplitPolygons"));

	UEditableMesh_SplitPolygons_Params params;
	params.PolygonsToSplit = PolygonsToSplit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.SplitPolygonalMesh
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPlane*                 InPlane                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FPolygonID>      PolygonIDs1                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FPolygonID>      PolygonIDs2                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FEdgeID>         BoundaryIDs                    (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680097120              		 offset:f87120                        

void UEditableMesh::SplitPolygonalMesh(struct FPlane* InPlane, TArray<struct FPolygonID>* PolygonIDs1, TArray<struct FPolygonID>* PolygonIDs2, TArray<struct FEdgeID>* BoundaryIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SplitPolygonalMesh"));

	UEditableMesh_SplitPolygonalMesh_Params params;
	params.InPlane = InPlane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PolygonIDs1 != nullptr)
		*PolygonIDs1 = params.PolygonIDs1;
	if (PolygonIDs2 != nullptr)
		*PolygonIDs2 = params.PolygonIDs2;
	if (BoundaryIDs != nullptr)
		*BoundaryIDs = params.BoundaryIDs;
}


// Function EditableMesh.EditableMesh.SplitEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// TArray<float>*                 Splits                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVertexID>       OutNewVertexIDs                (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680096FC0              		 offset:f86fc0                        

void UEditableMesh::SplitEdge(struct FEdgeID* EdgeID, TArray<float>* Splits, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SplitEdge"));

	UEditableMesh_SplitEdge_Params params;
	params.EdgeID = EdgeID;
	params.Splits = Splits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;
}


// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>*      VertexIDs                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>*                 VerticesNewCornerSharpness     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680096EA0              		 offset:f86ea0                        

void UEditableMesh::SetVerticesCornerSharpness(TArray<struct FVertexID>* VertexIDs, TArray<float>* VerticesNewCornerSharpness)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetVerticesCornerSharpness"));

	UEditableMesh_SetVerticesCornerSharpness_Params params;
	params.VertexIDs = VertexIDs;
	params.VerticesNewCornerSharpness = VerticesNewCornerSharpness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetVerticesAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForVertex>* AttributesForVertices          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680096DD0              		 offset:f86dd0                        

void UEditableMesh::SetVerticesAttributes(TArray<struct FAttributesForVertex>* AttributesForVertices)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetVerticesAttributes"));

	UEditableMesh_SetVerticesAttributes_Params params;
	params.AttributesForVertices = AttributesForVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForVertexInstance>* AttributesForVertexInstances   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680096D00              		 offset:f86d00                        

void UEditableMesh::SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance>* AttributesForVertexInstances)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetVertexInstancesAttributes"));

	UEditableMesh_SetVertexInstancesAttributes_Params params;
	params.AttributesForVertexInstances = AttributesForVertexInstances;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NumTexCoords                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680096C80              		 offset:f86c80                        

void UEditableMesh::SetTextureCoordinateCount(int* NumTexCoords)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetTextureCoordinateCount"));

	UEditableMesh_SetTextureCoordinateCount_Params params;
	params.NumTexCoords = NumTexCoords;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetSubdivisionCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NewSubdivisionCount            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680096C00              		 offset:f86c00                        

void UEditableMesh::SetSubdivisionCount(int* NewSubdivisionCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetSubdivisionCount"));

	UEditableMesh_SetSubdivisionCount_Params params;
	params.NewSubdivisionCount = NewSubdivisionCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexAttributesForPolygon>* VertexAttributesForPolygons    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680096A70              		 offset:f86a70                        

void UEditableMesh::SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon>* VertexAttributesForPolygons)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes"));

	UEditableMesh_SetPolygonsVertexAttributes_Params params;
	params.VertexAttributesForPolygons = VertexAttributesForPolygons;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetEdgesVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVerticesForEdge>* VerticesForEdges               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6800969C0              		 offset:f869c0                        

void UEditableMesh::SetEdgesVertices(TArray<struct FVerticesForEdge>* VerticesForEdges)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetEdgesVertices"));

	UEditableMesh_SetEdgesVertices_Params params;
	params.VerticesForEdges = VerticesForEdges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>*        EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         MaxDotProductForSoftEdge       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800968C0              		 offset:f868c0                        

void UEditableMesh::SetEdgesHardnessAutomatically(TArray<struct FEdgeID>* EdgeIDs, float* MaxDotProductForSoftEdge)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically"));

	UEditableMesh_SetEdgesHardnessAutomatically_Params params;
	params.EdgeIDs = EdgeIDs;
	params.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetEdgesHardness
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>*        EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<bool>*                  EdgesNewIsHard                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6800967A0              		 offset:f867a0                        

void UEditableMesh::SetEdgesHardness(TArray<struct FEdgeID>* EdgeIDs, TArray<bool>* EdgesNewIsHard)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetEdgesHardness"));

	UEditableMesh_SetEdgesHardness_Params params;
	params.EdgeIDs = EdgeIDs;
	params.EdgesNewIsHard = EdgesNewIsHard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>*        EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>*                 EdgesNewCreaseSharpness        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680096680              		 offset:f86680                        

void UEditableMesh::SetEdgesCreaseSharpness(TArray<struct FEdgeID>* EdgeIDs, TArray<float>* EdgesNewCreaseSharpness)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness"));

	UEditableMesh_SetEdgesCreaseSharpness_Params params;
	params.EdgeIDs = EdgeIDs;
	params.EdgesNewCreaseSharpness = EdgesNewCreaseSharpness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetEdgesAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForEdge>* AttributesForEdges             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6800965B0              		 offset:f865b0                        

void UEditableMesh::SetEdgesAttributes(TArray<struct FAttributesForEdge>* AttributesForEdges)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetEdgesAttributes"));

	UEditableMesh_SetEdgesAttributes_Params params;
	params.AttributesForEdges = AttributesForEdges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetAllowUndo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAllowUndo                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680096530              		 offset:f86530                        

void UEditableMesh::SetAllowUndo(bool* bInAllowUndo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetAllowUndo"));

	UEditableMesh_SetAllowUndo_Params params;
	params.bInAllowUndo = bInAllowUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAllowSpatialDatabase        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800964A0              		 offset:f864a0                        

void UEditableMesh::SetAllowSpatialDatabase(bool* bInAllowSpatialDatabase)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetAllowSpatialDatabase"));

	UEditableMesh_SetAllowSpatialDatabase_Params params;
	params.bInAllowSpatialDatabase = bInAllowSpatialDatabase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SetAllowCompact
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAllowCompact                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680096420              		 offset:f86420                        

void UEditableMesh::SetAllowCompact(bool* bInAllowCompact)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SetAllowCompact"));

	UEditableMesh_SetAllowCompact_Params params;
	params.bInAllowCompact = bInAllowCompact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlane*                 InPlane                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FPolygonID>      OutPolygons                    (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680096320              		 offset:f86320                        

void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct FPlane* InPlane, TArray<struct FPolygonID>* OutPolygons)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane"));

	UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params params;
	params.InPlane = InPlane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygons != nullptr)
		*OutPolygons = params.OutPolygons;
}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                LineSegmentStart               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                LineSegmentEnd                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPolygonID>      OutPolygons                    (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6800961D0              		 offset:f861d0                        

void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector* LineSegmentStart, struct FVector* LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment"));

	UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params params;
	params.LineSegmentStart = LineSegmentStart;
	params.LineSegmentEnd = LineSegmentEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygons != nullptr)
		*OutPolygons = params.OutPolygons;
}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPlane>*         Planes                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPolygonID>      OutPolygons                    (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6800960B0              		 offset:f860b0                        

void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane>* Planes, TArray<struct FPolygonID>* OutPolygons)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume"));

	UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Params params;
	params.Planes = Planes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygons != nullptr)
		*OutPolygons = params.OutPolygons;
}


// Function EditableMesh.EditableMesh.RevertInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEditableMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680096080              		 offset:f86080                        

class UEditableMesh* UEditableMesh::RevertInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.RevertInstance"));

	UEditableMesh_RevertInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.Revert
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680095E40              		 offset:f85e40                        

void UEditableMesh::Revert()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.Revert"));

	UEditableMesh_Revert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.RemovePolygonPerimeterVertices
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// int*                           FirstVertexNumberToRemove      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumVerticesToRemove            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeleteOrphanedVertexInstances (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680095F30              		 offset:f85f30                        

void UEditableMesh::RemovePolygonPerimeterVertices(struct FPolygonID* PolygonID, int* FirstVertexNumberToRemove, int* NumVerticesToRemove, bool* bDeleteOrphanedVertexInstances)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.RemovePolygonPerimeterVertices"));

	UEditableMesh_RemovePolygonPerimeterVertices_Params params;
	params.PolygonID = PolygonID;
	params.FirstVertexNumberToRemove = FirstVertexNumberToRemove;
	params.NumVerticesToRemove = NumVerticesToRemove;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.RebuildRenderMesh
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680095F10              		 offset:f85f10                        

void UEditableMesh::RebuildRenderMesh()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.RebuildRenderMesh"));

	UEditableMesh_RebuildRenderMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.QuadrangulateMesh
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      OutNewPolygonIDs               (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680095E60              		 offset:f85e60                        

void UEditableMesh::QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.QuadrangulateMesh"));

	UEditableMesh_QuadrangulateMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;
}


// Function EditableMesh.EditableMesh.PropagateInstanceChanges
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680095E40              		 offset:f85e40                        

void UEditableMesh::PropagateInstanceChanges()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.PropagateInstanceChanges"));

	UEditableMesh_PropagateInstanceChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.MoveVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexToMove>*  VerticesToMove                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680095D90              		 offset:f85d90                        

void UEditableMesh::MoveVertices(TArray<struct FVertexToMove>* VerticesToMove)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.MoveVertices"));

	UEditableMesh_MoveVertices_Params params;
	params.VerticesToMove = VerticesToMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.MakeVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           VertexIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680095D10              		 offset:f85d10                        

struct FVertexID UEditableMesh::STATIC_MakeVertexID(int* VertexIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.MakeVertexID"));

	UEditableMesh_MakeVertexID_Params params;
	params.VertexIndex = VertexIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakePolygonID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           PolygonIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680095D10              		 offset:f85d10                        

struct FPolygonID UEditableMesh::STATIC_MakePolygonID(int* PolygonIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.MakePolygonID"));

	UEditableMesh_MakePolygonID_Params params;
	params.PolygonIndex = PolygonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakePolygonGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           PolygonGroupIndex              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680095D10              		 offset:f85d10                        

struct FPolygonGroupID UEditableMesh::STATIC_MakePolygonGroupID(int* PolygonGroupIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.MakePolygonGroupID"));

	UEditableMesh_MakePolygonGroupID_Params params;
	params.PolygonGroupIndex = PolygonGroupIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakeEdgeID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           EdgeIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680095D10              		 offset:f85d10                        

struct FEdgeID UEditableMesh::STATIC_MakeEdgeID(int* EdgeIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.MakeEdgeID"));

	UEditableMesh_MakeEdgeID_Params params;
	params.EdgeIndex = EdgeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095C80              		 offset:f85c80                        

bool UEditableMesh::IsValidVertex(struct FVertexID* VertexID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsValidVertex"));

	UEditableMesh_IsValidVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID*        PolygonGroupID                 (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095BF0              		 offset:f85bf0                        

bool UEditableMesh::IsValidPolygonGroup(struct FPolygonGroupID* PolygonGroupID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsValidPolygonGroup"));

	UEditableMesh_IsValidPolygonGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095B60              		 offset:f85b60                        

bool UEditableMesh::IsValidPolygon(struct FPolygonID* PolygonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsValidPolygon"));

	UEditableMesh_IsValidPolygon_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095AD0              		 offset:f85ad0                        

bool UEditableMesh::IsValidEdge(struct FEdgeID* EdgeID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsValidEdge"));

	UEditableMesh_IsValidEdge_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsUndoAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095AB0              		 offset:f85ab0                        

bool UEditableMesh::IsUndoAllowed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsUndoAllowed"));

	UEditableMesh_IsUndoAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095A90              		 offset:f85a90                        

bool UEditableMesh::IsSpatialDatabaseAllowed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed"));

	UEditableMesh_IsSpatialDatabaseAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095A60              		 offset:f85a60                        

bool UEditableMesh::IsPreviewingSubdivisions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsPreviewingSubdivisions"));

	UEditableMesh_IsPreviewingSubdivisions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsOrphanedVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800959D0              		 offset:f859d0                        

bool UEditableMesh::IsOrphanedVertex(struct FVertexID* VertexID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsOrphanedVertex"));

	UEditableMesh_IsOrphanedVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCompactAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800959B0              		 offset:f859b0                        

bool UEditableMesh::IsCompactAllowed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsCompactAllowed"));

	UEditableMesh_IsCompactAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCommittedAsInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095980              		 offset:f85980                        

bool UEditableMesh::IsCommittedAsInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsCommittedAsInstance"));

	UEditableMesh_IsCommittedAsInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCommitted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095950              		 offset:f85950                        

bool UEditableMesh::IsCommitted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsCommitted"));

	UEditableMesh_IsCommitted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsBeingModified
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095920              		 offset:f85920                        

bool UEditableMesh::IsBeingModified()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.IsBeingModified"));

	UEditableMesh_IsBeingModified_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680095900              		 offset:f85900                        

struct FVertexID UEditableMesh::STATIC_InvalidVertexID()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.InvalidVertexID"));

	UEditableMesh_InvalidVertexID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidPolygonID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6800958E0              		 offset:f858e0                        

struct FPolygonID UEditableMesh::STATIC_InvalidPolygonID()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.InvalidPolygonID"));

	UEditableMesh_InvalidPolygonID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6800958C0              		 offset:f858c0                        

struct FPolygonGroupID UEditableMesh::STATIC_InvalidPolygonGroupID()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.InvalidPolygonGroupID"));

	UEditableMesh_InvalidPolygonGroupID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidEdgeID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6800958A0              		 offset:f858a0                        

struct FEdgeID UEditableMesh::STATIC_InvalidEdgeID()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.InvalidEdgeID"));

	UEditableMesh_InvalidEdgeID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InsetPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>*     PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         InsetFixedDistance             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InsetProgressTowardCenter      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInsetPolygonsMode*            Mode                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPolygonID>      OutNewCenterPolygonIDs         (Parm, OutParm, ZeroConstructor)
// TArray<struct FPolygonID>      OutNewSidePolygonIDs           (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680095670              		 offset:f85670                        

void UEditableMesh::InsetPolygons(TArray<struct FPolygonID>* PolygonIDs, float* InsetFixedDistance, float* InsetProgressTowardCenter, EInsetPolygonsMode* Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.InsetPolygons"));

	UEditableMesh_InsetPolygons_Params params;
	params.PolygonIDs = PolygonIDs;
	params.InsetFixedDistance = InsetFixedDistance;
	params.InsetProgressTowardCenter = InsetProgressTowardCenter;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
}


// Function EditableMesh.EditableMesh.InsertPolygonPerimeterVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// int*                           InsertBeforeVertexNumber       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVertexAndAttributes>* VerticesToInsert               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680095520              		 offset:f85520                        

void UEditableMesh::InsertPolygonPerimeterVertices(struct FPolygonID* PolygonID, int* InsertBeforeVertexNumber, TArray<struct FVertexAndAttributes>* VerticesToInsert)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.InsertPolygonPerimeterVertices"));

	UEditableMesh_InsertPolygonPerimeterVertices_Params params;
	params.PolygonID = PolygonID;
	params.InsertBeforeVertexNumber = InsertBeforeVertexNumber;
	params.VerticesToInsert = VerticesToInsert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.InsertEdgeLoop
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// TArray<float>*                 Splits                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6800953C0              		 offset:f853c0                        

void UEditableMesh::InsertEdgeLoop(struct FEdgeID* EdgeID, TArray<float>* Splits, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.InsertEdgeLoop"));

	UEditableMesh_InsertEdgeLoop_Params params;
	params.EdgeID = EdgeID;
	params.Splits = Splits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.InitializeAdapters
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6800953A0              		 offset:f853a0                        

void UEditableMesh::InitializeAdapters()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.InitializeAdapters"));

	UEditableMesh_InitializeAdapters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.GetVertexPairEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// struct FVertexID*              NextVertexID                   (ConstParm, Parm)
// bool                           bOutEdgeWindingIsReversed      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680095270              		 offset:f85270                        

struct FEdgeID UEditableMesh::GetVertexPairEdge(struct FVertexID* VertexID, struct FVertexID* NextVertexID, bool* bOutEdgeWindingIsReversed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexPairEdge"));

	UEditableMesh_GetVertexPairEdge_Params params;
	params.VertexID = VertexID;
	params.NextVertexID = NextVertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutEdgeWindingIsReversed != nullptr)
		*bOutEdgeWindingIsReversed = params.bOutEdgeWindingIsReversed;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (ConstParm, Parm)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6800951D0              		 offset:f851d0                        

struct FVertexID UEditableMesh::GetVertexInstanceVertex(struct FVertexInstanceID* VertexInstanceID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexInstanceVertex"));

	UEditableMesh_GetVertexInstanceVertex_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800951A0              		 offset:f851a0                        

int UEditableMesh::GetVertexInstanceCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexInstanceCount"));

	UEditableMesh_GetVertexInstanceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (ConstParm, Parm)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6800950B0              		 offset:f850b0                        

void UEditableMesh::GetVertexInstanceConnectedPolygons(struct FVertexInstanceID* VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons"));

	UEditableMesh_GetVertexInstanceConnectedPolygons_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680095020              		 offset:f85020                        

int UEditableMesh::GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID* VertexInstanceID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount"));

	UEditableMesh_GetVertexInstanceConnectedPolygonCount_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (ConstParm, Parm)
// int*                           ConnectedPolygonNumber         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680094F50              		 offset:f84f50                        

struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(struct FVertexInstanceID* VertexInstanceID, int* ConnectedPolygonNumber)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon"));

	UEditableMesh_GetVertexInstanceConnectedPolygon_Params params;
	params.VertexInstanceID = VertexInstanceID;
	params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680094F20              		 offset:f84f20                        

int UEditableMesh::GetVertexCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexCount"));

	UEditableMesh_GetVertexCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680094E30              		 offset:f84e30                        

void UEditableMesh::GetVertexConnectedPolygons(struct FVertexID* VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexConnectedPolygons"));

	UEditableMesh_GetVertexConnectedPolygons_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// TArray<struct FEdgeID>         OutConnectedEdgeIDs            (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680094D40              		 offset:f84d40                        

void UEditableMesh::GetVertexConnectedEdges(struct FVertexID* VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexConnectedEdges"));

	UEditableMesh_GetVertexConnectedEdges_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedEdgeIDs != nullptr)
		*OutConnectedEdgeIDs = params.OutConnectedEdgeIDs;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680094CB0              		 offset:f84cb0                        

int UEditableMesh::GetVertexConnectedEdgeCount(struct FVertexID* VertexID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount"));

	UEditableMesh_GetVertexConnectedEdgeCount_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// int*                           ConnectedEdgeNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680094BE0              		 offset:f84be0                        

struct FEdgeID UEditableMesh::GetVertexConnectedEdge(struct FVertexID* VertexID, int* ConnectedEdgeNumber)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexConnectedEdge"));

	UEditableMesh_GetVertexConnectedEdge_Params params;
	params.VertexID = VertexID;
	params.ConnectedEdgeNumber = ConnectedEdgeNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// TArray<struct FVertexID>       OutAdjacentVertexIDs           (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680094AF0              		 offset:f84af0                        

void UEditableMesh::GetVertexAdjacentVertices(struct FVertexID* VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetVertexAdjacentVertices"));

	UEditableMesh_GetVertexAdjacentVertices_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
}


// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680094AC0              		 offset:f84ac0                        

int UEditableMesh::GetTextureCoordinateCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetTextureCoordinateCount"));

	UEditableMesh_GetTextureCoordinateCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSubdivisionLimitData   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF680094A80              		 offset:f84a80                        

struct FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetSubdivisionLimitData"));

	UEditableMesh_GetSubdivisionLimitData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetSubdivisionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680094A50              		 offset:f84a50                        

int UEditableMesh::GetSubdivisionCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetSubdivisionCount"));

	UEditableMesh_GetSubdivisionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800949C0              		 offset:f849c0                        

int UEditableMesh::GetPolygonTriangulatedTriangleCount(struct FPolygonID* PolygonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount"));

	UEditableMesh_GetPolygonTriangulatedTriangleCount_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// int*                           PolygonTriangleNumber          (Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshTriangle           ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6800948E0              		 offset:f848e0                        

struct FMeshTriangle UEditableMesh::GetPolygonTriangulatedTriangle(struct FPolygonID* PolygonID, int* PolygonTriangleNumber)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle"));

	UEditableMesh_GetPolygonTriangulatedTriangle_Params params;
	params.PolygonID = PolygonID;
	params.PolygonTriangleNumber = PolygonTriangleNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// TArray<struct FVertexID>       OutPolygonPerimeterVertexIDs   (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6800947F0              		 offset:f847f0                        

void UEditableMesh::GetPolygonPerimeterVertices(struct FPolygonID* PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices"));

	UEditableMesh_GetPolygonPerimeterVertices_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygonPerimeterVertexIDs != nullptr)
		*OutPolygonPerimeterVertexIDs = params.OutPolygonPerimeterVertexIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// TArray<struct FVertexInstanceID> OutPolygonPerimeterVertexInstanceIDs (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680094700              		 offset:f84700                        

void UEditableMesh::GetPolygonPerimeterVertexInstances(struct FPolygonID* PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances"));

	UEditableMesh_GetPolygonPerimeterVertexInstances_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygonPerimeterVertexInstanceIDs != nullptr)
		*OutPolygonPerimeterVertexInstanceIDs = params.OutPolygonPerimeterVertexInstanceIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// int*                           PolygonVertexNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVertexInstanceID       ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680094630              		 offset:f84630                        

struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(struct FPolygonID* PolygonID, int* PolygonVertexNumber)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance"));

	UEditableMesh_GetPolygonPerimeterVertexInstance_Params params;
	params.PolygonID = PolygonID;
	params.PolygonVertexNumber = PolygonVertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800943E0              		 offset:f843e0                        

int UEditableMesh::GetPolygonPerimeterVertexCount(struct FPolygonID* PolygonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount"));

	UEditableMesh_GetPolygonPerimeterVertexCount_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// int*                           PolygonVertexNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680094560              		 offset:f84560                        

struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(struct FPolygonID* PolygonID, int* PolygonVertexNumber)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex"));

	UEditableMesh_GetPolygonPerimeterVertex_Params params;
	params.PolygonID = PolygonID;
	params.PolygonVertexNumber = PolygonVertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// TArray<struct FEdgeID>         OutPolygonPerimeterEdgeIDs     (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680094470              		 offset:f84470                        

void UEditableMesh::GetPolygonPerimeterEdges(struct FPolygonID* PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges"));

	UEditableMesh_GetPolygonPerimeterEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygonPerimeterEdgeIDs != nullptr)
		*OutPolygonPerimeterEdgeIDs = params.OutPolygonPerimeterEdgeIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800943E0              		 offset:f843e0                        

int UEditableMesh::GetPolygonPerimeterEdgeCount(struct FPolygonID* PolygonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount"));

	UEditableMesh_GetPolygonPerimeterEdgeCount_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// int*                           PerimeterEdgeNumber            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOutEdgeWindingIsReversedForPolygon (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6800942C0              		 offset:f842c0                        

struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(struct FPolygonID* PolygonID, int* PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge"));

	UEditableMesh_GetPolygonPerimeterEdge_Params params;
	params.PolygonID = PolygonID;
	params.PerimeterEdgeNumber = PerimeterEdgeNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutEdgeWindingIsReversedForPolygon != nullptr)
		*bOutEdgeWindingIsReversedForPolygon = params.bOutEdgeWindingIsReversedForPolygon;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonInGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID*        PolygonGroupID                 (ConstParm, Parm)
// int*                           PolygonNumber                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6800941F0              		 offset:f841f0                        

struct FPolygonID UEditableMesh::GetPolygonInGroup(struct FPolygonGroupID* PolygonGroupID, int* PolygonNumber)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonInGroup"));

	UEditableMesh_GetPolygonInGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;
	params.PolygonNumber = PolygonNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonGroupCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800941C0              		 offset:f841c0                        

int UEditableMesh::GetPolygonGroupCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonGroupCount"));

	UEditableMesh_GetPolygonGroupCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID*        PolygonGroupID                 (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680094130              		 offset:f84130                        

int UEditableMesh::GetPolygonCountInGroup(struct FPolygonGroupID* PolygonGroupID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonCountInGroup"));

	UEditableMesh_GetPolygonCountInGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680094100              		 offset:f84100                        

int UEditableMesh::GetPolygonCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonCount"));

	UEditableMesh_GetPolygonCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// TArray<struct FPolygonID>      OutAdjacentPolygons            (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680094010              		 offset:f84010                        

void UEditableMesh::GetPolygonAdjacentPolygons(struct FPolygonID* PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons"));

	UEditableMesh_GetPolygonAdjacentPolygons_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAdjacentPolygons != nullptr)
		*OutAdjacentPolygons = params.OutAdjacentPolygons;
}


// Function EditableMesh.EditableMesh.GetGroupForPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680093F70              		 offset:f83f70                        

struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(struct FPolygonID* PolygonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetGroupForPolygon"));

	UEditableMesh_GetGroupForPolygon_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680093F30              		 offset:f83f30                        

struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup"));

	UEditableMesh_GetFirstValidPolygonGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// struct FVertexID               OutEdgeVertexID0               (Parm, OutParm)
// struct FVertexID               OutEdgeVertexID1               (Parm, OutParm)
// FunctionAddress:0x00007FF680093E00              		 offset:f83e00                        

void UEditableMesh::GetEdgeVertices(struct FEdgeID* EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetEdgeVertices"));

	UEditableMesh_GetEdgeVertices_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeVertexID0 != nullptr)
		*OutEdgeVertexID0 = params.OutEdgeVertexID0;
	if (OutEdgeVertexID1 != nullptr)
		*OutEdgeVertexID1 = params.OutEdgeVertexID1;
}


// Function EditableMesh.EditableMesh.GetEdgeVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// int*                           EdgeVertexNumber               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680093D30              		 offset:f83d30                        

struct FVertexID UEditableMesh::GetEdgeVertex(struct FEdgeID* EdgeID, int* EdgeVertexNumber)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetEdgeVertex"));

	UEditableMesh_GetEdgeVertex_Params params;
	params.EdgeID = EdgeID;
	params.EdgeVertexNumber = EdgeVertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID0                      (ConstParm, Parm)
// struct FVertexID*              VertexID1                      (ConstParm, Parm)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680093C60              		 offset:f83c60                        

struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(struct FVertexID* VertexID0, struct FVertexID* VertexID1)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices"));

	UEditableMesh_GetEdgeThatConnectsVertices_Params params;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeLoopElements
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// TArray<struct FEdgeID>         EdgeLoopIDs                    (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680093B70              		 offset:f83b70                        

void UEditableMesh::GetEdgeLoopElements(struct FEdgeID* EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetEdgeLoopElements"));

	UEditableMesh_GetEdgeLoopElements_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EdgeLoopIDs != nullptr)
		*EdgeLoopIDs = params.EdgeLoopIDs;
}


// Function EditableMesh.EditableMesh.GetEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680093B40              		 offset:f83b40                        

int UEditableMesh::GetEdgeCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetEdgeCount"));

	UEditableMesh_GetEdgeCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680093A50              		 offset:f83a50                        

void UEditableMesh::GetEdgeConnectedPolygons(struct FEdgeID* EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons"));

	UEditableMesh_GetEdgeConnectedPolygons_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800939C0              		 offset:f839c0                        

int UEditableMesh::GetEdgeConnectedPolygonCount(struct FEdgeID* EdgeID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount"));

	UEditableMesh_GetEdgeConnectedPolygonCount_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// int*                           ConnectedPolygonNumber         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6800938F0              		 offset:f838f0                        

struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(struct FEdgeID* EdgeID, int* ConnectedPolygonNumber)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon"));

	UEditableMesh_GetEdgeConnectedPolygon_Params params;
	params.EdgeID = EdgeID;
	params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>*     PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680093840              		 offset:f83840                        

void UEditableMesh::GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID>* PolygonIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals"));

	UEditableMesh_GeneratePolygonTangentsAndNormals_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.FlipPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>*     PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680093790              		 offset:f83790                        

void UEditableMesh::FlipPolygons(TArray<struct FPolygonID>* PolygonIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.FlipPolygons"));

	UEditableMesh_FlipPolygons_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800936C0              		 offset:f836c0                        

int UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID* PolygonID, struct FVertexID* VertexID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex"));

	UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Params params;
	params.PolygonID = PolygonID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// struct FVertexID*              EdgeVertexID0                  (ConstParm, Parm)
// struct FVertexID*              EdgeVertexID1                  (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800935B0              		 offset:f835b0                        

int UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID* PolygonID, struct FVertexID* EdgeVertexID0, struct FVertexID* EdgeVertexID1)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices"));

	UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Params params;
	params.PolygonID = PolygonID;
	params.EdgeVertexID0 = EdgeVertexID0;
	params.EdgeVertexID1 = EdgeVertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.FindPolygonLoop
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// TArray<struct FEdgeID>         OutEdgeLoopEdgeIDs             (Parm, OutParm, ZeroConstructor)
// TArray<struct FEdgeID>         OutFlippedEdgeIDs              (Parm, OutParm, ZeroConstructor)
// TArray<struct FEdgeID>         OutReversedEdgeIDPathToTake    (Parm, OutParm, ZeroConstructor)
// TArray<struct FPolygonID>      OutPolygonIDsToSplit           (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680093390              		 offset:f83390                        

void UEditableMesh::FindPolygonLoop(struct FEdgeID* EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.FindPolygonLoop"));

	UEditableMesh_FindPolygonLoop_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeLoopEdgeIDs != nullptr)
		*OutEdgeLoopEdgeIDs = params.OutEdgeLoopEdgeIDs;
	if (OutFlippedEdgeIDs != nullptr)
		*OutFlippedEdgeIDs = params.OutFlippedEdgeIDs;
	if (OutReversedEdgeIDPathToTake != nullptr)
		*OutReversedEdgeIDPathToTake = params.OutReversedEdgeIDPathToTake;
	if (OutPolygonIDsToSplit != nullptr)
		*OutPolygonIDsToSplit = params.OutPolygonIDsToSplit;
}


// Function EditableMesh.EditableMesh.ExtrudePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>*     Polygons                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         ExtrudeDistance                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bKeepNeighborsTogether         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPolygonID>      OutNewExtrudedFrontPolygons    (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6800931E0              		 offset:f831e0                        

void UEditableMesh::ExtrudePolygons(TArray<struct FPolygonID>* Polygons, float* ExtrudeDistance, bool* bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ExtrudePolygons"));

	UEditableMesh_ExtrudePolygons_Params params;
	params.Polygons = Polygons;
	params.ExtrudeDistance = ExtrudeDistance;
	params.bKeepNeighborsTogether = bKeepNeighborsTogether;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewExtrudedFrontPolygons != nullptr)
		*OutNewExtrudedFrontPolygons = params.OutNewExtrudedFrontPolygons;
}


// Function EditableMesh.EditableMesh.ExtendVertices
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>*      VertexIDs                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bOnlyExtendClosestEdge         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ReferencePosition              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVertexID>       OutNewExtendedVertexIDs        (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680093040              		 offset:f83040                        

void UEditableMesh::ExtendVertices(TArray<struct FVertexID>* VertexIDs, bool* bOnlyExtendClosestEdge, struct FVector* ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ExtendVertices"));

	UEditableMesh_ExtendVertices_Params params;
	params.VertexIDs = VertexIDs;
	params.bOnlyExtendClosestEdge = bOnlyExtendClosestEdge;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewExtendedVertexIDs != nullptr)
		*OutNewExtendedVertexIDs = params.OutNewExtendedVertexIDs;
}


// Function EditableMesh.EditableMesh.ExtendEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>*        EdgeIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bWeldNeighbors                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FEdgeID>         OutNewExtendedEdgeIDs          (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680092EE0              		 offset:f82ee0                        

void UEditableMesh::ExtendEdges(TArray<struct FEdgeID>* EdgeIDs, bool* bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ExtendEdges"));

	UEditableMesh_ExtendEdges_Params params;
	params.EdgeIDs = EdgeIDs;
	params.bWeldNeighbors = bWeldNeighbors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewExtendedEdgeIDs != nullptr)
		*OutNewExtendedEdgeIDs = params.OutNewExtendedEdgeIDs;
}


// Function EditableMesh.EditableMesh.EndModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bFromUndo                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680092E50              		 offset:f82e50                        

void UEditableMesh::EndModification(bool* bFromUndo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.EndModification"));

	UEditableMesh_EndModification_Params params;
	params.bFromUndo = bFromUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeleteVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexInstanceID>* VertexInstanceIDsToDelete      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680092D50              		 offset:f82d50                        

void UEditableMesh::DeleteVertexInstances(TArray<struct FVertexInstanceID>* VertexInstanceIDsToDelete, bool* bDeleteOrphanedVertices)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.DeleteVertexInstances"));

	UEditableMesh_DeleteVertexInstances_Params params;
	params.VertexInstanceIDsToDelete = VertexInstanceIDsToDelete;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID*              VertexID                       (ConstParm, Parm)
// bool*                          bDeleteOrphanedEdges           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeleteOrphanedVertexInstances (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeleteEmptyPolygonGroups      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680092BA0              		 offset:f82ba0                        

void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID* VertexID, bool* bDeleteOrphanedEdges, bool* bDeleteOrphanedVertices, bool* bDeleteOrphanedVertexInstances, bool* bDeleteEmptyPolygonGroups)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons"));

	UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Params params;
	params.VertexID = VertexID;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeletePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>*     PolygonIDsToDelete             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bDeleteOrphanedEdges           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeleteOrphanedVertexInstances (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeleteEmptyPolygonGroups      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800929B0              		 offset:f829b0                        

void UEditableMesh::DeletePolygons(TArray<struct FPolygonID>* PolygonIDsToDelete, bool* bDeleteOrphanedEdges, bool* bDeleteOrphanedVertices, bool* bDeleteOrphanedVertexInstances, bool* bDeleteEmptyPolygonGroups)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.DeletePolygons"));

	UEditableMesh_DeletePolygons_Params params;
	params.PolygonIDsToDelete = PolygonIDsToDelete;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeletePolygonGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupID>* PolygonGroupIDs                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680092900              		 offset:f82900                        

void UEditableMesh::DeletePolygonGroups(TArray<struct FPolygonGroupID>* PolygonGroupIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.DeletePolygonGroups"));

	UEditableMesh_DeletePolygonGroups_Params params;
	params.PolygonGroupIDs = PolygonGroupIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeleteOrphanVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>*      VertexIDsToDelete              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680092850              		 offset:f82850                        

void UEditableMesh::DeleteOrphanVertices(TArray<struct FVertexID>* VertexIDsToDelete)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.DeleteOrphanVertices"));

	UEditableMesh_DeleteOrphanVertices_Params params;
	params.VertexIDsToDelete = VertexIDsToDelete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeleteEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>*        EdgeIDsToDelete                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680092750              		 offset:f82750                        

void UEditableMesh::DeleteEdges(TArray<struct FEdgeID>* EdgeIDsToDelete, bool* bDeleteOrphanedVertices)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.DeleteEdges"));

	UEditableMesh_DeleteEdges_Params params;
	params.EdgeIDsToDelete = EdgeIDsToDelete;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// bool*                          bDeleteOrphanedEdges           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeleteOrphanedVertices        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeleteOrphanedVertexInstances (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeleteEmptyPolygonGroups      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800925A0              		 offset:f825a0                        

void UEditableMesh::DeleteEdgeAndConnectedPolygons(struct FEdgeID* EdgeID, bool* bDeleteOrphanedEdges, bool* bDeleteOrphanedVertices, bool* bDeleteOrphanedVertexInstances, bool* bDeleteEmptyPolygonGroups)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons"));

	UEditableMesh_DeleteEdgeAndConnectedPolygons_Params params;
	params.EdgeID = EdgeID;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.CreateVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexToCreate>* VerticesToCreate               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVertexID>       OutNewVertexIDs                (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680092460              		 offset:f82460                        

void UEditableMesh::CreateVertices(TArray<struct FVertexToCreate>* VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.CreateVertices"));

	UEditableMesh_CreateVertices_Params params;
	params.VerticesToCreate = VerticesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;
}


// Function EditableMesh.EditableMesh.CreateVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVertexInstanceToCreate>* VertexInstancesToCreate        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVertexInstanceID> OutNewVertexInstanceIDs        (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680092320              		 offset:f82320                        

void UEditableMesh::CreateVertexInstances(TArray<struct FVertexInstanceToCreate>* VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.CreateVertexInstances"));

	UEditableMesh_CreateVertexInstances_Params params;
	params.VertexInstancesToCreate = VertexInstancesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewVertexInstanceIDs != nullptr)
		*OutNewVertexInstanceIDs = params.OutNewVertexInstanceIDs;
}


// Function EditableMesh.EditableMesh.CreatePolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonToCreate>* PolygonsToCreate               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPolygonID>      OutNewPolygonIDs               (Parm, OutParm, ZeroConstructor)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680092170              		 offset:f82170                        

void UEditableMesh::CreatePolygons(TArray<struct FPolygonToCreate>* PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.CreatePolygons"));

	UEditableMesh_CreatePolygons_Params params;
	params.PolygonsToCreate = PolygonsToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;
	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.CreatePolygonGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupToCreate>* PolygonGroupsToCreate          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPolygonGroupID> OutNewPolygonGroupIDs          (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680092030              		 offset:f82030                        

void UEditableMesh::CreatePolygonGroups(TArray<struct FPolygonGroupToCreate>* PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.CreatePolygonGroups"));

	UEditableMesh_CreatePolygonGroups_Params params;
	params.PolygonGroupsToCreate = PolygonGroupsToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewPolygonGroupIDs != nullptr)
		*OutNewPolygonGroupIDs = params.OutNewPolygonGroupIDs;
}


// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680091F40              		 offset:f81f40                        

void UEditableMesh::CreateMissingPolygonPerimeterEdges(struct FPolygonID* PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges"));

	UEditableMesh_CreateMissingPolygonPerimeterEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           NumVerticesToCreate            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVertexID>       OutNewVertexIDs                (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680091E60              		 offset:f81e60                        

void UEditableMesh::CreateEmptyVertexRange(int* NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.CreateEmptyVertexRange"));

	UEditableMesh_CreateEmptyVertexRange_Params params;
	params.NumVerticesToCreate = NumVerticesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;
}


// Function EditableMesh.EditableMesh.CreateEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeToCreate>*  EdgesToCreate                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680091D10              		 offset:f81d10                        

void UEditableMesh::CreateEdges(TArray<struct FEdgeToCreate>* EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.CreateEdges"));

	UEditableMesh_CreateEdges_Params params;
	params.EdgesToCreate = EdgesToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.ComputePolygonTriangulation
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// TArray<struct FMeshTriangle>   OutTriangles                   (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680091B00              		 offset:f81b00                        

void UEditableMesh::ComputePolygonTriangulation(struct FPolygonID* PolygonID, TArray<struct FMeshTriangle>* OutTriangles)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ComputePolygonTriangulation"));

	UEditableMesh_ComputePolygonTriangulation_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTriangles != nullptr)
		*OutTriangles = params.OutTriangles;
}


// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPolygonID>*     PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FEdgeID>         OutSharedEdgeIDs               (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680091BF0              		 offset:f81bf0                        

void UEditableMesh::ComputePolygonsSharedEdges(TArray<struct FPolygonID>* PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges"));

	UEditableMesh_ComputePolygonsSharedEdges_Params params;
	params.PolygonIDs = PolygonIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSharedEdgeIDs != nullptr)
		*OutSharedEdgeIDs = params.OutSharedEdgeIDs;
}


// Function EditableMesh.EditableMesh.ComputePolygonPlane
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// struct FPlane                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680091A60              		 offset:f81a60                        

struct FPlane UEditableMesh::ComputePolygonPlane(struct FPolygonID* PolygonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ComputePolygonPlane"));

	UEditableMesh_ComputePolygonPlane_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonNormal
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800919C0              		 offset:f819c0                        

struct FVector UEditableMesh::ComputePolygonNormal(struct FPolygonID* PolygonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ComputePolygonNormal"));

	UEditableMesh_ComputePolygonNormal_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680091920              		 offset:f81920                        

struct FVector UEditableMesh::ComputePolygonCenter(struct FPolygonID* PolygonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ComputePolygonCenter"));

	UEditableMesh_ComputePolygonCenter_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBoxSphereBounds        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800918D0              		 offset:f818d0                        

struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere"));

	UEditableMesh_ComputeBoundingBoxAndSphere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680091880              		 offset:f81880                        

struct FBox UEditableMesh::ComputeBoundingBox()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ComputeBoundingBox"));

	UEditableMesh_ComputeBoundingBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBarycentricWeightForPointOnPolygon
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (ConstParm, Parm)
// struct FVector*                PointOnPolygon                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshTriangle           OutTriangle                    (Parm, OutParm)
// struct FVector                 OutTriangleVertexWeights       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800916E0              		 offset:f816e0                        

bool UEditableMesh::ComputeBarycentricWeightForPointOnPolygon(struct FPolygonID* PolygonID, struct FVector* PointOnPolygon, struct FMeshTriangle* OutTriangle, struct FVector* OutTriangleVertexWeights)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ComputeBarycentricWeightForPointOnPolygon"));

	UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Params params;
	params.PolygonID = PolygonID;
	params.PointOnPolygon = PointOnPolygon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTriangle != nullptr)
		*OutTriangle = params.OutTriangle;
	if (OutTriangleVertexWeights != nullptr)
		*OutTriangleVertexWeights = params.OutTriangleVertexWeights;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.CommitInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    ComponentToInstanceTo          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UEditableMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680091650              		 offset:f81650                        

class UEditableMesh* UEditableMesh::CommitInstance(class UPrimitiveComponent** ComponentToInstanceTo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.CommitInstance"));

	UEditableMesh_CommitInstance_Params params;
	params.ComponentToInstanceTo = ComponentToInstanceTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.Commit
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680091630              		 offset:f81630                        

void UEditableMesh::Commit()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.Commit"));

	UEditableMesh_Commit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChangeVertexInstancesForPolygon>* VertexInstancesForPolygons     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680091510              		 offset:f81510                        

void UEditableMesh::ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon>* VertexInstancesForPolygons)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances"));

	UEditableMesh_ChangePolygonsVertexInstances_Params params;
	params.VertexInstancesForPolygons = VertexInstancesForPolygons;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.BevelPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>*     PolygonIDs                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         BevelFixedDistance             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BevelProgressTowardCenter      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPolygonID>      OutNewCenterPolygonIDs         (Parm, OutParm, ZeroConstructor)
// TArray<struct FPolygonID>      OutNewSidePolygonIDs           (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF680091330              		 offset:f81330                        

void UEditableMesh::BevelPolygons(TArray<struct FPolygonID>* PolygonIDs, float* BevelFixedDistance, float* BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.BevelPolygons"));

	UEditableMesh_BevelPolygons_Params params;
	params.PolygonIDs = PolygonIDs;
	params.BevelFixedDistance = BevelFixedDistance;
	params.BevelProgressTowardCenter = BevelProgressTowardCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
}


// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupForPolygon>* PolygonGroupForPolygons        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bDeleteOrphanedPolygonGroups   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680091230              		 offset:f81230                        

void UEditableMesh::AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon>* PolygonGroupForPolygons, bool* bDeleteOrphanedPolygonGroups)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups"));

	UEditableMesh_AssignPolygonsToPolygonGroups_Params params;
	params.PolygonGroupForPolygons = PolygonGroupForPolygons;
	params.bDeleteOrphanedPolygonGroups = bDeleteOrphanedPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditableMesh.EditableMesh.AnyChangesToUndo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680091200              		 offset:f81200                        

bool UEditableMesh::AnyChangesToUndo()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function EditableMesh.EditableMesh.AnyChangesToUndo"));

	UEditableMesh_AnyChangesToUndo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
