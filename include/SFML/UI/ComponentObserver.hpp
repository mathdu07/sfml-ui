/*
 *  Copyright © 2013 mathdu07
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef OBSERVER_H
#define OBSERVER_H

namespace sf
{
namespace ui
{
class ComponentEvent;

class ComponentObserver
{
    //CONSTRUCTORS/DESTRUCTORS -------------------------------------------
public:
    ////////////////////////////////////////////////////////////
    ///
    /// \brief Any object which extends of this can observe a component
    ///
    ////////////////////////////////////////////////////////////
    ComponentObserver();

    virtual ~ComponentObserver();
    //--------------------------------------------------------------------

    //METHODS ------------------------------------------------------------
public:
    ////////////////////////////////////////////////////////////
    ///
    /// \brief Called each time a component change
    ///
    ////////////////////////////////////////////////////////////
    virtual void onComponentEvent(const ComponentEvent &event) = 0;
    //--------------------------------------------------------------------
};

} /* namespace ui */
} /* namespace sf */

#endif // OBSERVER_H
////////////////////////////////////////////////////////////
///
/// \class sf::ui::ComponentObserver
/// \brief A object updated each time a ComponentObservable change
/// \ingroup ui
/// \see sf::ui::ComponentObservable
///
////////////////////////////////////////////////////////////
