import React, { useEffect, useState } from "react";
import axios from "axios";
import { MdPerson } from "react-icons/md";

const UserProfile = () => {
  const [user, setUser] = useState(null);

  useEffect(() => {
    axios
      .get("http://localhost:5000/users/1")
      .then((response) => {
        setUser(response.data);
      })
      .catch((error) => {
        console.error("Error fetching user data:", error);
      });
  }, []);

  if (!user)
    return (
      <div className="flex justify-center items-center h-full">
        <p>Loading...</p>
      </div>
    );

  return (
    <div className="bg-white p-6 rounded-lg shadow-md flex items-center">
      <img
        src={user.avatar}
        alt="User Avatar"
        className="w-20 h-20 rounded-full mr-4"
      />
      <div>
        <h2 className="text-xl font-semibold">{user.name}</h2>
        <p className="text-gray-600">{user.email}</p>
      </div>
    </div>
  );
};

export default UserProfile;