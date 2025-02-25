#pragma once
#include "visualAlgorithm.h"

class visualQuickhull : public visualAlgorithm
{
public:
    virtual std::vector<std::vector<Line>> Execute(const std::vector<Vector2>& points) const override;
};