#pragma once

#include <unordered_map>
#include <string>
#include <string_view>

#include "point.h"

namespace twod {
    class window
    {
        public:
            enum callback_type {
                DisplayFunc,
                OverlayFunc,
                ReshapeFunc,
                KeyboardFunc,
                MouseFunc,
                MotionFunc,
                PassiveMotionFunc,
                VisibilityFunc,
                EntryFunc,
                SpecialFunc,
                SpaceballMotionFunc,
                SpaceballRotateFunc,
                SpaceballButtonFunc,
                ButtonBoxFunc,
                DialsFunc,
                TabletMotionFunc,
                TabletButtonFunc,
                MenuStatusFunc,
                IdleFunc,
                TimerFunc
            };

            window(const std::string& name, const point& pos = {0, 0});
            void set_position(const point& pos);
            point position() const;

            void set_name(const std::string& name);
            std::string_view name() const;

            template<typename T>
            void register_cb(callback_type type, T cb)
            {
            }

            void unset_cb(callback_type type);
            ~window();
        private:
            std::string name_;
            point pos_;
            int tag_;
    };
}
