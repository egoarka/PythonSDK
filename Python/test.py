import bl2sdk

# def process_hook(caller, stack, result, function):
# 	code = stack.Code
# 	OfferingId = stack.popFString()
# 	x = []
# 	for i in range(9):
# 		x.append(str(stack.popULong()))
# 	ContentTitleText = stack.popFString()
# 	PriceText = stack.popFString()
# 	DescriptionText = stack.popFString()
# 	print("'{}' [{}] '{}' '{}' '{}'".format(OfferingId.AsString(), ', '.join(x), ContentTitleText.AsString(), PriceText.AsString(), DescriptionText.AsString()))
# 	stack.Code = code
# 	# objs, count = stack.popRawTArray()
# 	# for x in range(count):
# 	# 	print("{}".format(objs.popObject().GetFullName()))
# 	# stack.SkipFunction()
# 	# new_obj = bl2sdk.ConstructObject(Class=obj.Class, InOuter=obj.Outer, Name=bl2sdk.FName("Test"), SetFlags=0x1, Template=obj)
# 	# old_tiers = new_obj.Root.Children[1].Tiers
# 	# new_obj.Root.Children[1].Tiers = [old_tiers[0], old_tiers[1], old_tiers[-1]]
# 	# caller.Initialize(new_obj)
# 	return True

# bl2sdk.RemoveScriptHook("Function WillowGame.MarketplaceGFxMovie.CreateContentItem", "InjectMods")
# bl2sdk.RegisterScriptHook("Function WillowGame.MarketplaceGFxMovie.CreateContentItem", "InjectMods", process_hook)

def ReplaceDLCWithMods(caller, stack, result, function):
	EventID = stack.popInt()
	Caption = stack.popFString()
	bDisabled = stack.popULong()
	bNew = stack.popULong()
	if Caption.AsString() == "$WillowMenu.WillowScrollingListDataProviderFrontEnd.DLC":
		Caption = bl2sdk.FString("MODS")
	caller.AddListItem(EventID, Caption, bDisabled, bNew)
	stack.SkipFunction()
	return False


def HookMainMenuPopulateForMods(caller, stack, result, function):
	bl2sdk.RegisterScriptHook("Function WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods", ReplaceDLCWithMods)
	caller.Populate(stack.popObject())
	bl2sdk.RemoveScriptHook("Function WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods")
	stack.SkipFunction()
	return False

bl2sdk.RemoveScriptHook("Function WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods")
bl2sdk.RegisterScriptHook("Function WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods", HookMainMenuPopulateForMods)

# for x in bl2sdk.UObject.FindObjectsContaining("Class "):
# 	if not (x.bCooked):
# 		print(x.GetFullName())

# x = bl2sdk.ConstructObject(bl2sdk.UObject.StaticClass())
# print(x)
# objs = bl2sdk.UObject.FindObjectsContaining("WillowPlayerController ")
# pc = bl2sdk.GetEngine().GamePlayers[0].Actor
# obj = bl2sdk.ConstructObject(Class=bl2sdk.UTrainingMessageDefinition.StaticClass(), Name=bl2sdk.FName("Test"), SetFlags=0)
# pc.eventHandleTrainingEventDefinition(obj)
# tree = bl2sdk.UObject.FindObjectsContaining("SkillTreeDefinition ")[-1]
# branch = tree.Branches[1]
# definition = branch.Definition
# obj = bl2sdk.ConstructObject(Class=definition.Class, InOuter=definition.Outer, Name=bl2sdk.FName("Test"), SetFlags=0x403, Template=definition)
# tree.ObjectFlags.A = tree.ObjectFlags.A | 0x4000
# tree.Branches[2].Definition.ObjectFlags.A = tree.Branches[2].Definition.ObjectFlags.A | 0x4000
# print("%s: 0x%x, 0x%x, 0x%x, 0x%x" % (definition.GetFullName(), definition.HashNext.Dummy, definition.HashOuterNext.Dummy, definition.StateFrame.Dummy, definition.LinkerIndex.Dummy))
# print("%s: 0x%x, 0x%x, 0x%x, 0x%x" % (obj.GetFullName(), obj.HashNext.Dummy, obj.HashOuterNext.Dummy, obj.StateFrame.Dummy, obj.LinkerIndex.Dummy))
# tree.Branches.Set(2, definition)
# for y in x:
# 	print(y.GetFullName())