#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillExpressionEvaluatorDefinition(py::module &m)
{
    py::class_< USkillExpressionEvaluatorDefinition,  UGBXDefinition   >(m, "USkillExpressionEvaluatorDefinition")
		.def_static("StaticClass", &USkillExpressionEvaluatorDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Evaluator", &USkillExpressionEvaluatorDefinition::Evaluator)
          ;
}