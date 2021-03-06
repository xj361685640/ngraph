/*******************************************************************************
* Copyright 2017-2018 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#pragma once

#include "ngraph/op/util/binary_elementwise_comparison.hpp"

namespace ngraph
{
    namespace op
    {
        /// \brief Elementwise greater-than-or-equal operation.
        class GreaterEq : public util::BinaryElementwiseComparison
        {
        public:
            /// \brief Constructs a greater-than-or-equal operation.
            ///
            /// \param arg0 Node that produces the first input tensor.
            /// \param arg1 Node that produces the second input tensor.
            GreaterEq(const std::shared_ptr<Node>& arg0, const std::shared_ptr<Node>& arg1);

            virtual std::shared_ptr<Node>
                copy_with_new_args(const NodeVector& new_args) const override;
        };
    }
}
