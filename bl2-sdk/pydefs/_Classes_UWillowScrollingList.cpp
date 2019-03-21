#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingList()
{
    class_< UWillowScrollingList, bases< UGFxClikWidget >  , boost::noncopyable>("UWillowScrollingList", no_init)
        .def_readwrite("DataProviderStack", &UWillowScrollingList::DataProviderStack)
        .def_readwrite("IndexToEventId", &UWillowScrollingList::IndexToEventId)
        .def_readwrite("MyOwnerMovie", &UWillowScrollingList::MyOwnerMovie)
        .def_readwrite("BackCaption", &UWillowScrollingList::BackCaption)
        .def("StaticClass", &UWillowScrollingList::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlaySound_VerticalMovement", &UWillowScrollingList::PlaySound_VerticalMovement)
        .def("OnSpinnerValueChange", &UWillowScrollingList::OnSpinnerValueChange)
        .def("OnSliderValueChange", &UWillowScrollingList::OnSliderValueChange)
        .def("OnClikEvent", &UWillowScrollingList::OnClikEvent)
        .def("GetSelectedIndex", &UWillowScrollingList::GetSelectedIndex)
        .def("SetSelectedIndex", &UWillowScrollingList::SetSelectedIndex)
        .def("SetFocused", &UWillowScrollingList::SetFocused)
        .def("IsSpinnerListItemInternal", &UWillowScrollingList::IsSpinnerListItemInternal)
        .def("IsSpinnerListItem", &UWillowScrollingList::IsSpinnerListItem)
        .def("IsSliderListItemInternal", &UWillowScrollingList::IsSliderListItemInternal)
        .def("IsSliderListItem", &UWillowScrollingList::IsSliderListItem)
        .def("FocusFirstAvailableListItem", &UWillowScrollingList::FocusFirstAvailableListItem)
        .def("ClearListItems", &UWillowScrollingList::ClearListItems)
        .def("CommitListItems", &UWillowScrollingList::CommitListItems)
        .def("AddSliderListItemInternal", &UWillowScrollingList::AddSliderListItemInternal)
        .def("AddSliderListItem", &UWillowScrollingList::AddSliderListItem)
        .def("AddSpinnerListItemInternal", &UWillowScrollingList::AddSpinnerListItemInternal)
        .def("AddSpinnerListItem", &UWillowScrollingList::AddSpinnerListItem)
        .def("AddListItemInternal", &UWillowScrollingList::AddListItemInternal)
        .def("AddListItem", &UWillowScrollingList::AddListItem)
        .def("HandlePopList", &UWillowScrollingList::HandlePopList)
        .def("Refresh", &UWillowScrollingList::Refresh)
        .def("PushDataProvider", &UWillowScrollingList::PushDataProvider)
        .def("GetCurrentDataProvider", &UWillowScrollingList::GetCurrentDataProvider, return_value_policy< reference_existing_object >())
        .def("Cleanup", &UWillowScrollingList::Cleanup)
        .def("Init", &UWillowScrollingList::Init)
        .def("OnSelectedIndexChanged", &UWillowScrollingList::OnSelectedIndexChanged)
        .def("OnListChanged", &UWillowScrollingList::OnListChanged)
        .def("OnEvent", &UWillowGFxClikWidget::OnEvent)
        .def("AddClikEvent", &UWillowGFxClikWidget::AddClikEvent)
        .staticmethod("StaticClass")
  ;
}